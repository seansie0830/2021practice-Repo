#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int jewel,play1,play2,taken;
	jewel=17;
	play1=0;
	play2=0;
	int i;
	while(1){
		Sleep(500);
		system("cls");
		cout<<"�E�_���_�ۼ�";
		for(i=1;i<=jewel;i++)
		{
			cout<<"o";
		}
		cout<<"("<<jewel<<")\n";
		cout<<"���a1�_�ۼ�";
		for(i=1;i<=play1;i++)cout<<"o";
		cout<<"("<<play1<<")\n";
		cout<<"���a2�_�ۼ�";
		for(i=1;i<=play2;i++)	cout<<"o";
		cout<<"("<<play2<<")\n";
		if(jewel<=0){
			cout<<"���a2��F";
			break;
		}
		while(1)
		{
			cout<<"\n���a1�A�п�J�z�n�����_�ۼƶq�C";
			cin>>taken;
			if(taken<=3)
			{
				break;
			}
			cout<<"\n�п�J0-3�H�������";
		}
	
		jewel=jewel-taken;
		play1=play1+taken;
		if(jewel<=0)
		{
			cout<<"���a1��F";
			break;
		}
		while(1)
		{
			cout<<"\n���a2�A�п�J�z�n�����_�ۼƶq�C";
			cin>>taken;
			if(taken<=3)
			{ 
				break;
			}
			cout<<"\n�п�J0-3�H�������";
		}
	
		jewel=jewel-taken;
		play2=play2+taken;
	}
	cout<<"game over";
	cin>>taken;
}

