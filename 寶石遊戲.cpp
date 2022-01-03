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
		cout<<"聚寶盆寶石數";
		for(i=1;i<=jewel;i++)
		{
			cout<<"o";
		}
		cout<<"("<<jewel<<")\n";
		cout<<"玩家1寶石數";
		for(i=1;i<=play1;i++)cout<<"o";
		cout<<"("<<play1<<")\n";
		cout<<"玩家2寶石數";
		for(i=1;i<=play2;i++)	cout<<"o";
		cout<<"("<<play2<<")\n";
		if(jewel<=0){
			cout<<"玩家2輸了";
			break;
		}
		while(1)
		{
			cout<<"\n玩家1，請輸入您要拿的寶石數量。";
			cin>>taken;
			if(taken<=3)
			{
				break;
			}
			cout<<"\n請輸入0-3以內的整數";
		}
	
		jewel=jewel-taken;
		play1=play1+taken;
		if(jewel<=0)
		{
			cout<<"玩家1輸了";
			break;
		}
		while(1)
		{
			cout<<"\n玩家2，請輸入您要拿的寶石數量。";
			cin>>taken;
			if(taken<=3)
			{ 
				break;
			}
			cout<<"\n請輸入0-3以內的整數";
		}
	
		jewel=jewel-taken;
		play2=play2+taken;
	}
	cout<<"game over";
	cin>>taken;
}

