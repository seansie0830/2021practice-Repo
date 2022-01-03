#include<iostream>
using namespace std;
int main(){
	int i,num,count=0;
	cout<<"請輸入一個正整數";
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
	cout<<"總共有"<<count<<"個因數"; 
}
