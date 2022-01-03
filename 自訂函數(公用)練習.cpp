//自訂函式實習 (公用函式) 
#include<iostream>
using namespace std;
float triangle(float,float);//定義函式原型: 回傳值型態 名稱(引數1,引數2,.....引數n);
int main (){
	int a,b;
	cout<<"請輸入高";
	cin>>b;
	cout<<"請輸入底";
	cin>>a;
	cout<<triangle(a,b);
}
float triangle(float bottom,float height){
	return bottom*height/2;	
}
