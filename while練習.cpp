#include<iostream>
using namespace std;
int main(){
	int i,num,count=0;
	cout<<"�п�J�@�ӥ����";
	cin>>num;
	i=1;
	while(i<num)
	{
		if(num%i==0)
		{
			cout<<i;
			count++;
			if(i!=num)
			{
				cout<<",";
			}
		}
	i++;
	} 
	cout<<"�`�@��"<<count<<"�Ӧ]��"; 
}
