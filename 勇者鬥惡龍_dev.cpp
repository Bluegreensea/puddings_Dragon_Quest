#include<iostream>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
#include<iomanip>
using namespace std;
int dragon_death_check(int dhp){
	if(dhp==0)
	    {
			Sleep(700);
			cout<<endl<<"�i�����ѤF�c�s!";
			Sleep(500);
			cout<<endl;
			system("pause");
			exit(0);
			return 0;
	    }
}
int main()
{
	int yhp,yatk,dhp,datk,i,R,D,rr,ff=0,f,c=0,st=0,de=0;
	int chp,hp,ddhp,dd=0,ii=0,cc=0,d=0,b=0,bhp,sh=0,ang=0;
	int freeze=1,fire=1,swipe=1,dizzy=1,blood=1,shield=1,cure=1,treat=1,pow=0; //�ޯ�}�� 
	int fre=18,fir=8,swi=5,diz=13,blo=27,shi=16,cur=20,tre=14; //Cool Down 
	double r;
	string s,yn;
	cout<<" ---------------"<<endl;
	cout<<"|"<<"��������������"<<" |"<<endl;
	cout<<"|"<<"  �i�̰��c�s  "<<" |"<<endl;
	cout<<"|"<<"��������������"<<" |"<<endl;
	cout<<" ---------------"<<endl;
	cout<<"Beta: 4.0.4"<<endl<<endl;
	cout<<"�i�̳̤j��q: ";
	cin>>yhp;
	cout<<endl<<"�i�̰�¦�����O: ";
	cin>>yatk;
	cout<<endl<<"�c�s�̤j��q: ";
	cin>>dhp;
	cout<<endl<<"�c�s��¦�����O: ";
	cin>>datk;
	cout<<"------------------------------------------------------------"<<endl;
	f=yatk*0.45;
	hp=yhp;
	ddhp=dhp;
	while(1)
	{
		cout<<endl<<"�O�_�ݭn�C�������Χޯश��? | yes / no |"<<endl<<endl;
		cin>>yn;
		if(yn=="yes")
		{
			Sleep(300);
			cout<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"�C���覡:"<<endl;
			Sleep(800);
			cout<<"\t��J�ޯध�N���Y�i����"<<endl<<endl;
			Sleep(800);
			cout<<"\t���q����: �y����¦�ˮ`���H�ˮ`�Y�ƪ��ˮ`"<<endl<<endl;
			Sleep(800);
			cout<<"\t�������q����: ����2���A���ˮ`��b�A�ˮ`�Y�ƦU�ۤ��}�p��"<<endl<<endl;
			Sleep(800);
			cout<<"\t���m: �Ӧ^�X���i�����ʧ@�A��צ�c�s��60%���ˮ`"<<endl<<endl;
			Sleep(800);
			cout<<"\t�ˮ`�Y��: �i��O0.90�B0.95�B1.00�B1.05�B1.10��1.80(����)"<<endl<<endl;
			Sleep(800);
			cout<<"\t�ޯध�N�o�ɶ�(CD)��0�Y�i�A���ϥθӧޯ�"<<endl;
			system("pause");
			cout<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			Sleep(300);
			cout<<"�ޯश��: (�H�U�C�ӧޯ�u��ϥ�1��)"<<endl<<endl;
			Sleep(900);
			cout<<"freeze(�B�� CD-18):"<<endl<<endl;
			cout<<"\t�B��c�s3�^�X(�]�A��e�^�X)�A�ϴc�s�L�k���"<<endl<<endl;
			Sleep(900);
			cout<<"fire(�U�N CD-8):"<<endl<<endl;
			cout<<"\t���U�Ӫ�5�^�X(�]�A��e�^�X)�A��c�s�y��������45%���ˮ`"<<endl<<endl;
			Sleep(900);
			cout<<"swipe(���� CD-5):"<<endl<<endl;
			cout<<"\t�Ӧ^�X��c�s�y�������O3�����ˮ`(�L�k�A�P�����[��)"<<endl<<endl;
			Sleep(900);
			cout<<"dizzy(�w�t CD-13):"<<endl<<endl;
			cout<<"\t���U�Ӫ�4�^�X(�]�A��e�^�X)�A�c�s��40%�����v�ˮ`�ۤv"<<endl<<endl;
			Sleep(900);
			cout<<"blood(�l�� CD-27):"<<endl<<endl;
			cout<<"\t���U�Ӫ�3�^�X(�]�A��e�^�X)�A�N�c�s��e�ͩR��3%�A�ন�ۤv����q"<<endl<<endl;
			Sleep(900);
			cout<<"shield(�@�� CD-16):"<<endl<<endl;
			cout<<"\t���U�Ӫ�3�^�X(�]�A��e�^�X)�A�K�̴c�s���Ҧ��ˮ`"<<endl<<endl;
			Sleep(900);
			cout<<"cure(�v¡ CD-20):"<<endl<<endl;
			cout<<"\t�Ӧ^�X�^�_�̤j�ͩR��40%"<<endl<<endl;
			Sleep(900);
			cout<<"treat(�^�_ CD-14):"<<endl<<endl;
			cout<<"\t���U�Ӫ�3�^�X(�]�A��e�^�X)�A�^�_�w�l�ͩR��20%"<<endl<<endl;
			system("pause");
			cout<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			system("pause");
			cout<<"����:"<<endl;
			Sleep(800);
			cout<<"\t�C�^�X�[1�A�Y�c�s�Ӧ^�X�����h�A�[1�A��10�h�i�H�ϥΥ�����pow"<<endl<<endl;
			Sleep(800);
			cout<<"pow(������):"<<endl;
			cout<<"\t�ϥΫ���ȴ�10�A�Ӧ^�X��c�s�y�������O5�����ˮ`�A"<<endl;
			cout<<"\t�æ�70%���v�b��e�^�X�w���c�s"<<endl;
			system("pause");
			cout<<endl;
			/*cout<<"------------------------------------------------------------"<<endl;
			cout<<"�c�s�ޯ�:"<<endl;
			cout<<"�z��:"<<endl<<endl;
			cout<<"\t���U�Ӫ��T�^�X�A�i�̪������O�z��30%�A����ˮ`����10%"<<endl<<endl;
			cout<<"�ϼu:"<<endl<<endl;
			cout<<"\t���U�Ӫ�2�^�X�A�ϼu�i�̪��ˮ`��40%�A��3�^�X�������O��2��"<<endl<<endl;
			cout<<"�r��:"<<endl<<endl;
			cout<<"\t���U�Ӫ�5�^�X�A��i�̳y������30%���ˮ`"<<endl<<endl;
			cout<<"���u:"<<endl<<endl;
			cout<<"\t�Ӧ^�X��i�̳y���s��5������40%���ˮ`"<<endl<<endl;
			cout<<"���z:"<<endl<<endl;
			cout<<"\t�W�[�ۨ��̤j��q20%���@�ޡA�Y�i�̦b3�^�X�����ॴ���@�ޡA�i�̦��`"<<endl<<endl;
			cout<<endl;*/
			break;
		}
		else if(yn=="no")
			break;
		else
			continue;
	}

	for(i=1;i>0;i++)
	{
		cout<<endl<<"------------------------------------------------------------"<<endl;
		/* �ϥΪ̤��� */
	   	cout<<"�� "<<i<<" �^�X:"<<endl;
		if(ang>=10&&pow==0)
		{
			pow++;
		}
		cout<<"����: | +  atk|| ++  double atk|| -  defend|"<<endl;
		cout<<"�ޯ�: "<<endl;
			cout<<"| 1  "<<left<<setw(6)<<"freeze"<<" CD: "<<left<<setw(2)<<18-fre<<"/18"<<" |";
			cout<<"| 2  "<<left<<setw(6)<<"fire"<<" CD: "<<left<<setw(2)<<8-fir<<"/8 "<<" |";
			cout<<"| 3  "<<left<<setw(6)<<"swipe"<<" CD: "<<left<<setw(2)<<5-swi<<"/5 "<<" |";
			cout<<endl;
			cout<<"| 4  "<<left<<setw(6)<<"dizzy"<<" CD: "<<left<<setw(2)<<13-diz<<"/13"<<" |";
			cout<<"| 5  "<<left<<setw(6)<<"blood"<<" CD: "<<left<<setw(2)<<27-blo<<"/27"<<" |";
			cout<<"| 6  "<<left<<setw(6)<<"shield"<<" CD: "<<left<<setw(2)<<16-shi<<"/16"<<" |";
			cout<<endl;
			cout<<"| 7  "<<left<<setw(6)<<"cure"<<" CD: "<<left<<setw(2)<<20-cur<<"/20"<<" |";
			cout<<"| 8  "<<left<<setw(6)<<"treat"<<" CD: "<<left<<setw(2)<<14-tre<<"/14"<<" |";
		if(pow==1)
			cout<<"| !   pow |";
		cout<<endl<<endl;
		cout<<"����: "<<ang<<endl<<endl;
		cout<<"�i�̦�q:"<<yhp<<"/"<<hp<<"  �c�s��q:"<<dhp<<"/"<<ddhp<<endl<<endl;
		// �U���ޯ�CD�P�_
		if(freeze==0)
		{
			if(fre<18)
				fre++;
			else if(fre==18)
				freeze++;
		}
		if(fire==0)
		{
			if(fir<8)
				fir++;
			else if(fir==8)
				fire++;
		}
		if(swipe==0)
		{
			if(swi<5)
				swi++;
			else if(swi==5)
				swipe++;
		}
		if(dizzy==0)
		{
			if(diz<13)
				diz++;
			else if(diz==13)
				dizzy++;
		}
		if(blood==0)
		{
			if(blo<27)
				blo++;
			else if(blo==27)
				blood++;
		}
		if(shield==0)
		{
			if(shi<16)
				shi++;
			else if(shi==16)
				shield++;
		}
		if(cure==0)
		{
			if(cur<20)
				cur++;
			else if(cur==20)
				cure++;
		}
		if(treat==0)
		{
			if(tre<14)
				tre++;
			else if(tre==14)
				treat++;
		}
		// �H���ˮ`���v
		srand(time(NULL));
		R=rand()%14;
		r=0;
		s="";
		switch(R)
		{
		case 0:
		case 1:
			r=0.9;
			break;
		case 2:
		case 3:
		case 4:
			r=0.95;
			break;
		case 5:
		case 6:
		case 7:
			r=1;
			break;
		case 8:
		case 9:
		case 10:
			r=1.05;
			break;
		case 11:
		case 12:
			r=1.1;
			break;
		case 13:
			r=1.8;
			break;
		}
		rr=yatk*r; //�p��i�̳y���ˮ`
		while(cin>>s) //�ϥΪ̿�J���O�P�P�_
		{
			cout<<endl;
			if(s=="+")
			{
				Sleep(600);
				cout<<"�i�̹�c�s�y���F "<<rr<<" �I�ˮ`";
				if(r==1.8)
		    		cout<<"\a(����!)"<<endl;
		    	cout<<endl;
	   			dhp=dhp-rr;
	   			if(dhp<0)
					dhp=0;
				dragon_death_check(dhp);
	   			break;
			}
			else if(s=="++")
			{
				Sleep(300);
				cout<<"�i�̹�c�s�y���F "<<rr/2<<" �I�ˮ`";
				if(r==1.8)
		    		cout<<"\a(����!)";
		    	cout<<endl;
	   			dhp=dhp-(rr/2);
	   			srand(time(NULL)); //�p��ĤG���i�̧����ˮ`��
				R=rand()%14;
				r=0;
				Sleep(300);
				switch(R)
				{
					case 0:
					case 1:
						r=0.9;
						break;
					case 2:
					case 3:
					case 4:
						r=0.95;
						break;
					case 5:
					case 6:
					case 7:
						r=1;
						break;
					case 8:
					case 9:
					case 10:
						r=1.05;
						break;
					case 11:
					case 12:
						r=1.1;
						break;
					case 13:
						r=1.8;
						break;
				}
				rr=yatk*r;
				cout<<"�i�̹�c�s�y���F "<<rr/2<<" �I�ˮ`";
				if(r==1.8)
		    		cout<<"\a(����!)";
		    	cout<<endl;
	   			dhp=dhp-(rr/2);
	   			if(dhp<0)
					dhp=0;
				dragon_death_check(dhp);
	   			break;
			}
			else if(s=="-")
			{
				Sleep(600);
				cout<<"(���m)"<<endl;
				de++;
				break;
			}
			else if(freeze==1&&s=="1")
			{
				Sleep(900);
				freeze--;
				ff=2;
				cout<<"�i�̨ϥΤFfreeze(�B��)"<<endl;
				fre=fre-18;
				break;
			}
			else if(fire==1&&s=="2")
			{
				Sleep(900);
				fire--;
				cout<<"�i�̨ϥΤFfire(�U�N)"<<endl;
	   			ii=5;
	   			fir=fir-8;
	   			break;
			}
			else if(swipe==1&&s=="3")
			{
				Sleep(900);
				swipe--;
	   			cout<<"\a�i�̨ϥΤFswipe(����)"<<endl<<endl;
				cout<<"�i�̹�c�s�y���F "<<yatk*3<<" �I�ˮ`"<<endl;
	    		dhp=dhp-(yatk*3);
	    		swi=swi-5;
	    		if(dhp<0)
					dhp=0;
				dragon_death_check(dhp);
	    		break;
			}
			else if(dizzy==1&&s=="4")
			{
				Sleep(900);
				dizzy--;
	   			cout<<"�i�̨ϥΤFdizzy(�w�t)"<<endl;
	   			d=4;
	   			diz=diz-13;
	   			break;
			}
			else if(blood==1&&s=="5")
			{
				Sleep(900);
				blood--;
	   			cout<<"�i�̨ϥΤFblood(�l��)"<<endl;
	   			b=3;
	   			blo=blo-27;
	   			break;
			}
			else if(shield==1&&s=="6")
			{
				Sleep(900);
				shield--;
	   			cout<<"�i�̨ϥΤFshield(�@��)"<<endl;
	   			sh=3;
	   			shi=shi-16;
	   			break;
			}
			else if(cure==1&&s=="7")
			{
				Sleep(900);
				cure--;
				cout<<"�i�̨ϥΤFcure(�v¡)"<<endl;
				c=hp*0.4;
				cout<<endl;
				yhp=yhp+c;
				if(yhp>hp)
				{
					c=c+hp-yhp;
					yhp=hp;
				}
				cout<<"�i�̦^�_�F "<<c<<" �I�ͩR"<<endl;
				cur=cur-20;
				break;
			}
			else if(treat==1&&s=="8")
			{
				Sleep(900);
				treat--;
				cout<<"�i�̨ϥΤFtreat(�^�_)"<<endl;
				cc=3;
				tre=tre-14;
				break;
			}
			else if(pow==1&&s=="!")
			{
				Sleep(900);
				pow--;
				cout<<"�i�̨ϥΤFpow(������)"<<endl;
				cout<<"!!!!!!!!!!!!!!!!!!!!!"<<endl;
				cout<<"\a\a\a\a\a\a\a\a\a\a";
				Sleep(800);
				cout<<"�i�̹�c�s�y���F "<<yatk*5<<" �I�ˮ`"<<endl;
	    		dhp=dhp-(yatk*5);
	    		if(dhp<0)
					dhp=0;
				ang=ang-10;
				Sleep(1200);
				dragon_death_check(dhp);
			    D=0;
				srand(time(NULL));
				D=rand()%10;
				Sleep(500);
				cout<<endl;
				switch(D)
				{
					case 0:
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
						st++;
						cout<<"�w�����\\!"<<endl;
						break;
					case 7:
					case 8:
					case 9:
						cout<<"�w������!"<<endl;
						break;
				}
	    		break;
			}
			else
				cout<<"�A��J����r�å��ݩ����@�����"<<endl<<endl;
				continue;
		}
		cout<<endl;
		if(ii>0||cc>0||b>0)
		{
			if(ii>0)
			{
				Sleep(900);
				dhp=dhp-f;
				if(dhp<0)
					dhp=0;
				cout<<endl;
				cout<<"�U�N��c�s�y���F "<<f<<" �I�ˮ`"<<endl;
				ii--;
				dragon_death_check(dhp);
			}
			if(cc>0)
			{
				Sleep(900);
				chp=(hp-yhp)*0.2;
				yhp=yhp+chp;
				if(yhp>hp)
				{
					chp=chp+hp-yhp;
					yhp=hp;
				}
				cout<<endl;
				cout<<"�i�̦^�_�F "<<chp<<" �I��q"<<endl;
				cc--;
			}
			if(b>0)
			{
				Sleep(900);
				bhp=dhp*0.03;
				yhp=yhp+bhp;
				if(yhp>hp)
				{
					bhp=bhp+hp-yhp;
					yhp=hp;
				}
				dhp=dhp-bhp;
				if(dhp<0)
					dhp=0;
				cout<<endl;
				cout<<"�i�̱N�c�s�� "<<bhp<<" �I��q�ഫ���ۤv����q"<<endl;
				b--;
				dragon_death_check(dhp);
			}
			cout<<endl;
		}
		if(st==1)
		{
			st--;
			continue;
		}
		srand(time(NULL));
		R=rand()%14;
		r=0;
		switch(R)
		{
			case 0:
			case 1:
				r=0.9;
				break;
			case 2:
			case 3:
			case 4:
				r=0.95;
				break;
			case 5:
			case 6:
			case 7:
				r=1;
				break;
			case 8:
			case 9:
			case 10:
				r=1.05;
				break;
			case 11:
			case 12:
				r=1.1;
				break;
			case 13:
				r=1.8;
				break;
		}
		if(ff==0)
		{
			Sleep(900);
		    rr=datk*r;
		   	if(d>0)
			{
				D=0;
				srand(time(NULL));
				D=rand()%5;
				Sleep(500);
				if(s=="4")
					cout<<endl;
				switch(D)
				{
					case 0:
					case 1:
						dd=1;
						cout<<"�w�t���\\!"<<endl<<endl;
						break;
					case 2:
					case 3:
					case 4:
						cout<<"�w�t����!"<<endl<<endl;
						break;
				}
				d--;
			}
			if(dd==0)
			{
				if(sh==0&&de==1)
				{
					cout<<"�i�̨��m��F "<<int(rr*0.6)<<" �I�ˮ`"<<endl<<endl;
					rr=rr*0.4;
					de--;
				}
				else if(sh>0&&de==0)
				{
					cout<<"(�@�ާl���F "<<rr<<" �I�ˮ`)"<<endl;
					rr=0;
					sh--;
				}
				else if(sh>0&&de==1)
				{
					cout<<"�i�̨��m��F 0 �I�ˮ`"<<endl<<endl;
					de--;
					cout<<"(�@�ާl���F "<<rr<<" �I�ˮ`)"<<endl;
					rr=0;
					sh--;
				}
				cout<<"�c�s��i�̳y���F "<<rr<<" �I�ˮ`";
			    if(r==1.8)
			    {
			    	cout<<"\a(����!)"<<endl;
					ang++;
					cout<<"�i�̫��ȥ[1"<<endl;
				}
				cout<<endl;
				yhp=yhp-rr;
			}
			else if(dd==1)
			{
				dd--;
				cout<<"�c�s��ۤv�y���F "<<rr<<" �I�ˮ`";
			    if(r==1.8)
			    {
			    	cout<<"\a(����!)"<<endl;
					ang++;
				}
				cout<<endl;
				dhp=dhp-rr;
			}
			if(dhp<0)
				dhp=0;
			dragon_death_check(dhp);
		    if(yhp<0)
				yhp=0;
		    if(yhp<=0)
		    {
				Sleep(700);
		    	cout<<endl<<"�i�̳Q�c�s���ѤF!";
				Sleep(500);
				cout<<endl;
				system("pause");
				return 0;
		    }
		    cout<<endl;
		}
		else if(ff==1)
		{
			Sleep(200);
			cout<<"�c�s�N�b�U�@�^�X�ѭ�"<<endl<<endl;
			ff--;
		}
		else
		{
			Sleep(200);
			cout<<"�c�s�N�b "<<ff<<" �^�X��ѭ�"<<endl<<endl;
			ff--;
		}
		if(ii==1)
		{
			Sleep(200);
			cout<<"�U�N�ĪG�N�b�U�@�^�X�����ɥ���"<<endl<<endl;
		}
		if(d==1)
		{
			Sleep(200);
			cout<<"�w�t�ĪG�N�b�U�@�^�X�����ɥ���"<<endl<<endl;
		}
		if(b==1)
		{
			Sleep(200);
			cout<<"�l��ĪG�N�b�U�@�^�X�����ɥ���"<<endl<<endl;
		}
		if(sh==1)
		{
			Sleep(200);
			cout<<"�@�ޮĪG�N�b�U�@�^�X�����ɥ���"<<endl<<endl;
		}
		if(cc==1)
		{
			Sleep(200);
			cout<<"�^�_�ĪG�N�b�U�@�^�X�����ɥ���"<<endl<<endl;
		}
		ang++;
		Sleep(1500);
	}
}
