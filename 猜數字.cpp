#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main ()
{
	int quesNum,input,guestTime;
	srand(time(NULL));
		quesNum=rand()%100+1;
	while(1)
	{
		cout<<"請輸入你猜測的數字(範圍1-100)(輸入0結束遊戲)\n";
		cin>>input;
		if(input==0)
		{
			cout<<"不得輸入0，遊戲結束";
			break;
		}
		else if(input>100||input<0){
			cout<<"請輸入在範圍(1-100)內的數\n";
			continue;
		}
		else if(input>quesNum)cout<<"太大\n";
		else if(input<quesNum)cout<<"太小\n";
		else break;
		guestTime++;
	}
	if(input!=0)cout<<"您猜了"<<guestTime+1<<"次";
	else cout<<"正確答案為"<<quesNum;
	int a;
	cin>>a; 	
 } 
