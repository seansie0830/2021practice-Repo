#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	float a,audlt,child,amount;
	cout<<"�п�J�j�H���O�H��\n";
	cin>>audlt;
	cout<<"�п�J�p�Į��O�H��\n";
	cin>>child;
	amount=audlt*250+child*150;
	if(amount>1000){
		amount=amount*0.9;
		cout<<"�������E��馩�A�`���B��"<<amount; 
	}
	else{
		cout<<"�����S���E��馩�A�`���B��"<<amount;
		
	}

	
	cout<<endl<<"-----------------------------"<<endl<<"���浲���A�п�J�Ʀr��enter�������{�ǡC";
	cin>>a;
}
