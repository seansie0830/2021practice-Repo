#include<iostream>
using namespace std;
int main(){
	int a,b,c,D;
	float ans1,ans2;
	cout<<"��J�@���G����{�����Y��a,b,c";
	cin>>a>>b>>c;
	if(a!=0)
	{
		D=b*b-4*a*c;
		if(D>0){
			cout<<"�۲����"<<endl;
		} 
		else if(D==0) 
		{
			cout<<"�۵����"<<endl;
		}
		else  
		{
			cout<<"�@�m�Ʈ�"<<endl;
		}
	}
	else{
		cout<<"a�Y�Ƥ��o��0"<<endl;
	}

}
