#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	int classa,classb,intTest,inta,intb;
	cout<<"�п�ܷQ�i�檺�B�����O"<<endl;
	cout<<"(1)�򥻹B��"<<endl;
	cout<<"(2)���Y�B��"<<endl;
	cout<<"(3)�޿�B��"<<endl;
	cout<<"(4)�ƦX�B��"<<endl;
	cin>>classa;
	switch(classa)
	{
	case 1:
		cout<<"-------------------------"<<endl;
		cout<<"�п�ܷQ�B�⪺�Ҧ�"<<endl;
		cout<<"(1)�[�k�B��"<<endl;
		cout<<"(2)��k�B��"<<endl;
		cout<<"(3)���k�B��"<<endl;
		cout<<"(4)���k�B��"<<endl;
		cout<<"(5)�l�ƹB��"<<endl;
		cout<<"(6)���W�B��"<<endl;
		cout<<"(7)����B��"<<endl;
		cin>>classb;
		switch(classb)
		{
			case 1:
				cout<<"�п�J�Q�[��"<<endl;
				cin>>a;
				cout<<"�п�J�[��"<<endl;
				cin>>b;
				cout<<"���G��"<<a+b<<endl; 
				break;
			case 2:
				cout<<"�п�J�Q���"<<endl;
				cin>>a;
				cout<<"�п�J���"<<endl;
				cin>>b;
				cout<<"���G��"<<a-b<<endl; 
				break;
			case 3:
				cout<<"�п�J�Q����"<<endl;
				cin>>a;
				cout<<"�п�J����"<<endl;
				cin>>b;
				cout<<"���G��"<<a*b<<endl; 
				break;
			case 4:
				cout<<"�п�J�Q����"<<endl;
				cin>>a;
				cout<<"�п�J����"<<endl;
				cin>>b;
				if(b!=0)
				{
					cout<<"���G��"<<a/b<<endl;
				}
				else
				{
					cout<<"���Ƥ��o���s"<<endl;
				}
				 
				break;
			case 5:
				cout<<"�п�J�Q����"<<endl;
				cin>>a;
				a=intTest;
				if(a!=0)
				{
					cout<<"�п�J���!";
				} 
				cout<<"�п�J����"<<endl;
				cin>>b;
				if(b!=0)
				{
					cout<<"�п�J���!";
				} 
				if(b!=0)
				{
					inta=a;
					intb=b;
					
					cout<<"���G��"<<inta%intb<<endl;
				}
				else
				{
					cout<<"���Ƥ��o���s"<<endl;
				}
				break;
			case 6:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				a=a++; 
				break;
			case 7:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				a=a--; 
				break;
			default:
				cout<<"�z��J���~�N�X�F!\a"<<endl; 
				break;
		}
		break; 
	case 2:
		cout<<"�п�ܷQ�B�⪺�Ҧ�\n";
		cout<<"(1)�j��B��"<<endl;
		cout<<"(2)�p��B��"<<endl;
		cout<<"(3)����B��"<<endl;
		cout<<"(4)�j�󵥩�B��"<<endl;
		cout<<"(5)�p�󵥩�B��"<<endl;
		cout<<"(6)������B��"<<endl;
		cin>>classb;
		switch(classb)
		{
			case 1:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				cout<<"�Ы��wb����"<<endl;
				cin>>b;
				cout<<"a>b�����G��"<<(a>b)<<endl;
				break;
			case 2:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				cout<<"�Ы��wb����"<<endl;
				cin>>b;
				cout<<"a<b�����G��"<<(a<b)<<endl;
				break;
			case 3:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				cout<<"�Ы��wb����"<<endl;
				cin>>b;
				cout<<"a=b�����G��"<<(a==b)<<endl;
				break;
			case 4:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				cout<<"�Ы��wb����"<<endl;
				cin>>b;
				cout<<"a>=b�����G��"<<(a>=b)<<endl;
				break;
			case 5:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				cout<<"�Ы��wb����"<<endl;
				cin>>b;
				cout<<"a<=b�����G��"<<(a<=b)<<endl;
				break;
				break;
			case 6:
				cout<<"�Ы��wa����"<<endl;
				cin>>a;
				cout<<"�Ы��wb����"<<endl;
				cin>>b;
				cout<<"a!=b�����G��"<<(a!=b)<<endl;
				break;
			default:
				cout<<"�z��J���~�N�X�F!\a"<<endl; 
				break;
			}
	break;
		
	case 3:
		cout<<"�п�ܷQ�B�⪺�Ҧ�";
		cout<<"(1)AND�B��"<<endl;
		cout<<"(2)OR�B��"<<endl;
		cout<<"(3)NOT�B��"<<endl;
		cout<<"(4)XOR�B��"<<endl;
		cout<<"(5)����B��"<<endl;
		cin>>classb;
		switch(classb)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				cout<<"�z��J���~�N�X�F!\a"<<endl; 
				break;
		}
	break;
	case 4:
		cout<<"�п�ܷQ�B�⪺�Ҧ�";
		cout<<"(1)�[�k���w�B��B��"<<endl;
		cout<<"(2)��k���w�B��"<<endl;
		cout<<"(3)���k���w�B��"<<endl;
		cout<<"(4)���k���w�B��"<<endl;
		cout<<"(5)�l�ƫ��w�B��"<<endl;
		cout<<"(6)XOR�줸���w�B��"<<endl;
		cout<<"(7)AND�줸���w�B��"<<endl;
		cout<<"(8)OR�줸���w�B��"<<endl;
		cout<<"(9)�줸�k�����w�B��"<<endl;
		cout<<"(10)�줸�������w�B��"<<endl;
		cin>>classb;
		switch(classb)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			default:
				cout<<"�z��J���~�N�X�F!\a"<<endl; 
				break;
			
		}
	break;
			
	default:
		cout<<"�z��J���~�N�X�F!\a"<<endl; 
		break;
	}
	cout<<endl<<"-----------------------------"<<endl<<"���浲���A�п�J�Ʀr��enter�������{�ǡC";
	cin>>a;
	 
}
