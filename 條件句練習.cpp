#include<iostream>
using namespace std;
int main(){
	int a,b,c,D;
	float ans1,ans2;
	cout<<"輸入一元二次方程式的係數a,b,c";
	cin>>a>>b>>c;
	if(a!=0)
	{
		D=b*b-4*a*c;
		if(D>0){
			cout<<"相異實根"<<endl;
		} 
		else if(D==0) 
		{
			cout<<"相等實根"<<endl;
		}
		else  
		{
			cout<<"共軛複根"<<endl;
		}
	}
	else{
		cout<<"a係數不得為0"<<endl;
	}

}
