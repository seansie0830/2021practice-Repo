#include<iostream>
using namespace std;
int main (){
	int a,b,c,d,e;//�ŧi�ܼ�
	int array[10]={12,15,14,15,65,85,96,45,78,41};
	cout<<"int a,b,c,d,e;//�ŧi�ܼ�\n";
	int *ptr,*ptr2;//�ŧi����
	cout<<"int *ptr\n";//�ŧi����;
	ptr=&a;
	cout<<"ptr=a//���դ��[&���}\n";
	cout<<"����\n";
	cout<<"���}�����[&��\n";
	cout<<"ptr�x�s"<<ptr; 
	ptr=&array[1];
	ptr2=array;
	cout<<"ptr=array;���հ}�C���}��+&";
	cout<<"ptr="<<ptr<<"ptr2="<<ptr2;
} 
