//公用函式實習 sqrt(x) 求x的平方根 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cout<<"輸入一元二次方程式的係數a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a==0)cout<<"a不得為零，計算錯誤";
	else if(b*b-4*a*c<0)cout<<"計算結果中有虛根，答案為"<<-b/2*a<<"±"<<b*b-4*a*c/2*a<<"i";
	else{
		cout<<"結果為"<<-b+sqrt(b*b-4*a*c)/2*a<<"或"<<-b-sqrt(b*b-4*a*c)/2*a; 
	}
	
	
} 
