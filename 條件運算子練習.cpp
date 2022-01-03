#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	float a,audlt,child,amount;
	cout<<"請輸入大人消費人數\n";
	cin>>audlt;
	cout<<"請輸入小孩消費人數\n";
	cin>>child;
	amount=audlt*250+child*150;
	if(amount>1000){
		amount=amount*0.9;
		cout<<"本次有九折折扣，總金額為"<<amount; 
	}
	else{
		cout<<"本次沒有九折折扣，總金額為"<<amount;
		
	}

	
	cout<<endl<<"-----------------------------"<<endl<<"執行結束，請輸入數字按enter結束此程序。";
	cin>>a;
}
