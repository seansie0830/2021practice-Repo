//���Ψ禡��� sqrt(x) �Dx������� 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cout<<"��J�@���G����{�����Y��a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a==0)cout<<"a���o���s�A�p����~";
	else if(b*b-4*a*c<0)cout<<"�p�⵲�G������ڡA���׬�"<<-b/2*a<<"��"<<b*b-4*a*c/2*a<<"i";
	else{
		cout<<"���G��"<<-b+sqrt(b*b-4*a*c)/2*a<<"��"<<-b-sqrt(b*b-4*a*c)/2*a; 
	}
	
	
} 
