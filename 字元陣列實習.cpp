/*
������ߥؼ�
���Ocin�Pcin.getline���t�O
�ǲߨϥΦr���}�Cchar 
*/
#include<iostream>
#include<windows.h>
using namespace std;
int main (){
	char str1[20],str2[20];
	cout<<"�Hcin.getline�Φ�Ū���r��ܰ}�Cstr1         ";
	cin>>str1;
	cout<<str1<<sizeof(str1)<<"�줸��"<<endl;
	cout<<"--------------------------------\n";

	cout<<"�Hcin.getline�Φ�Ū���r��ܰ}�Cstr1         ";
	cin.getline(str2,20);
	cout<<str1<<sizeof(str2)<<"�줸��"<<endl;
	cout<<"--------------------------------\n";

	
	
}
