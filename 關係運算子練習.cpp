//���Y�B��l�m��
#include<iostream>
#include<windows.h>
#include<conio.h> 
using namespace std;
int main() {
	int window=0;
	int a,b;
	cout<<"�п�Ja����";
	cin>>a;
	cout<<"�п�Jb����";
	cin>>b;
	cout<<"a���Ȭ�"<<a<<endl<<"b���Ȭ�"<<b<<endl ;
	cout<<"a>b(�j��))������G��"<<(a>b)<<endl;
	Sleep(500);
	cout<<"a==b(����)������G��"<<(a==b)<<endl;
	Sleep(500);
	cout<<"a>=b(�j�󵥩�)������G��"<<(a>=b)<<endl;
	Sleep(500);
	cout<<"a<=b(�p�󵥩�)������G��"<<(a<=b)<<endl;
	Sleep(500);
	cout<<"a!=b(������)������G��"<<(a!=b)<<endl;
	cout<<endl<<"-----------------------------"<<endl<<"���浲���A�п�J���N�䵲�����{�ǡC";
	a=getche();
	return 0 ;
	
}
