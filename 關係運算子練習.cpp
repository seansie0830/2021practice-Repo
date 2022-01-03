//關係運算子練習
#include<iostream>
#include<windows.h>
#include<conio.h> 
using namespace std;
int main() {
	int window=0;
	int a,b;
	cout<<"請輸入a的值";
	cin>>a;
	cout<<"請輸入b的值";
	cin>>b;
	cout<<"a的值為"<<a<<endl<<"b的值為"<<b<<endl ;
	cout<<"a>b(大於))比較結果為"<<(a>b)<<endl;
	Sleep(500);
	cout<<"a==b(等於)比較結果為"<<(a==b)<<endl;
	Sleep(500);
	cout<<"a>=b(大於等於)比較結果為"<<(a>=b)<<endl;
	Sleep(500);
	cout<<"a<=b(小於等於)比較結果為"<<(a<=b)<<endl;
	Sleep(500);
	cout<<"a!=b(不等於)比較結果為"<<(a!=b)<<endl;
	cout<<endl<<"-----------------------------"<<endl<<"執行結束，請輸入任意鍵結束此程序。";
	a=getche();
	return 0 ;
	
}
