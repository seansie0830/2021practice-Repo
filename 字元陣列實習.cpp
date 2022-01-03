/*
本次實習目標
分別cin與cin.getline的差別
學習使用字元陣列char 
*/
#include<iostream>
#include<windows.h>
using namespace std;
int main (){
	char str1[20],str2[20];
	cout<<"以cin.getline形式讀取字串至陣列str1         ";
	cin>>str1;
	cout<<str1<<sizeof(str1)<<"位元組"<<endl;
	cout<<"--------------------------------\n";

	cout<<"以cin.getline形式讀取字串至陣列str1         ";
	cin.getline(str2,20);
	cout<<str1<<sizeof(str2)<<"位元組"<<endl;
	cout<<"--------------------------------\n";

	
	
}
