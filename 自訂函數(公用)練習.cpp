//�ۭq�禡��� (���Ψ禡) 
#include<iostream>
using namespace std;
float triangle(float,float);//�w�q�禡�쫬: �^�ǭȫ��A �W��(�޼�1,�޼�2,.....�޼�n);
int main (){
	int a,b;
	cout<<"�п�J��";
	cin>>b;
	cout<<"�п�J��";
	cin>>a;
	cout<<triangle(a,b);
}
float triangle(float bottom,float height){
	return bottom*height/2;	
}
