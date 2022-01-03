#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	iN1=20;
	cout<<"<out>iN1="<<iN1<<endl;
	ptr1=&iN1;
	cout<<"<cmd> *ptr1=100\n";
	*ptr1=100;
	cout<<"<out>iN1="<<iN1;
	cout<<"<cmd> *ptr1=200\n";
	*ptr1=200;
	cout<<"<out>iN1="<<iN1;
}
