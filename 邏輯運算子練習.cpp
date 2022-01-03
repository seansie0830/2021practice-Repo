#include<iostream>
using namespace std;
int main() {
	int mathscore,engscore,a;
	int mathbool,engbool;
	cout<<"請輸入英文成績"<<endl;
	cin>>engscore;
	cout<<"請輸入數學成績"<<endl;
	cin>>mathscore;
	mathbool=mathscore>=60&&mathscore<=80;
	engbool=engscore>=60&&mathscore<=80;
	cout<<"英文成績為"<<engscore<<endl;
	cout<<"數學成績為"<<mathscore<<endl; 
	cout<<"英文成績是否可以訂正通過?"<<engbool<<endl;
	cout<<"數學成績是否可以訂正通過?"<<mathbool<<endl;	 
	cout<<endl<<"-----------------------------"<<endl<<"執行結束，請輸入數字按enter結束此程序。";
	cin>>a;
}
