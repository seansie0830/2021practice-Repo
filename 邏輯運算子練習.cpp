#include<iostream>
using namespace std;
int main() {
	int mathscore,engscore,a;
	int mathbool,engbool;
	cout<<"�п�J�^�妨�Z"<<endl;
	cin>>engscore;
	cout<<"�п�J�ƾǦ��Z"<<endl;
	cin>>mathscore;
	mathbool=mathscore>=60&&mathscore<=80;
	engbool=engscore>=60&&mathscore<=80;
	cout<<"�^�妨�Z��"<<engscore<<endl;
	cout<<"�ƾǦ��Z��"<<mathscore<<endl; 
	cout<<"�^�妨�Z�O�_�i�H�q���q�L?"<<engbool<<endl;
	cout<<"�ƾǦ��Z�O�_�i�H�q���q�L?"<<mathbool<<endl;	 
	cout<<endl<<"-----------------------------"<<endl<<"���浲���A�п�J�Ʀr��enter�������{�ǡC";
	cin>>a;
}
