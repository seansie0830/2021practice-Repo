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
		cout<<"�п�J�A�q�����Ʀr(�d��1-100)(��J0�����C��)\n";
		cin>>input;
		if(input==0)
		{
			cout<<"���o��J0�A�C������";
			break;
		}
		else if(input>100||input<0){
			cout<<"�п�J�b�d��(1-100)������\n";
			continue;
		}
		else if(input>quesNum)cout<<"�Ӥj\n";
		else if(input<quesNum)cout<<"�Ӥp\n";
		else break;
		guestTime++;
	}
	if(input!=0)cout<<"�z�q�F"<<guestTime+1<<"��";
	else cout<<"���T���׬�"<<quesNum;
	int a;
	cin>>a; 	
 } 
