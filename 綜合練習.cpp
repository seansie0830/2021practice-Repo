#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	int classa,classb,intTest,inta,intb;
	cout<<"請選擇想進行的運算類別"<<endl;
	cout<<"(1)基本運算"<<endl;
	cout<<"(2)關係運算"<<endl;
	cout<<"(3)邏輯運算"<<endl;
	cout<<"(4)複合運算"<<endl;
	cin>>classa;
	switch(classa)
	{
	case 1:
		cout<<"-------------------------"<<endl;
		cout<<"請選擇想運算的模式"<<endl;
		cout<<"(1)加法運算"<<endl;
		cout<<"(2)減法運算"<<endl;
		cout<<"(3)乘法運算"<<endl;
		cout<<"(4)除法運算"<<endl;
		cout<<"(5)餘數運算"<<endl;
		cout<<"(6)遞增運算"<<endl;
		cout<<"(7)遞減運算"<<endl;
		cin>>classb;
		switch(classb)
		{
			case 1:
				cout<<"請輸入被加數"<<endl;
				cin>>a;
				cout<<"請輸入加數"<<endl;
				cin>>b;
				cout<<"結果為"<<a+b<<endl; 
				break;
			case 2:
				cout<<"請輸入被減數"<<endl;
				cin>>a;
				cout<<"請輸入減數"<<endl;
				cin>>b;
				cout<<"結果為"<<a-b<<endl; 
				break;
			case 3:
				cout<<"請輸入被乘數"<<endl;
				cin>>a;
				cout<<"請輸入乘數"<<endl;
				cin>>b;
				cout<<"結果為"<<a*b<<endl; 
				break;
			case 4:
				cout<<"請輸入被除數"<<endl;
				cin>>a;
				cout<<"請輸入除數"<<endl;
				cin>>b;
				if(b!=0)
				{
					cout<<"結果為"<<a/b<<endl;
				}
				else
				{
					cout<<"除數不得為零"<<endl;
				}
				 
				break;
			case 5:
				cout<<"請輸入被除數"<<endl;
				cin>>a;
				a=intTest;
				if(a!=0)
				{
					cout<<"請輸入整數!";
				} 
				cout<<"請輸入除數"<<endl;
				cin>>b;
				if(b!=0)
				{
					cout<<"請輸入整數!";
				} 
				if(b!=0)
				{
					inta=a;
					intb=b;
					
					cout<<"結果為"<<inta%intb<<endl;
				}
				else
				{
					cout<<"除數不得為零"<<endl;
				}
				break;
			case 6:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				a=a++; 
				break;
			case 7:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				a=a--; 
				break;
			default:
				cout<<"您輸入錯誤代碼了!\a"<<endl; 
				break;
		}
		break; 
	case 2:
		cout<<"請選擇想運算的模式\n";
		cout<<"(1)大於運算"<<endl;
		cout<<"(2)小於運算"<<endl;
		cout<<"(3)等於運算"<<endl;
		cout<<"(4)大於等於運算"<<endl;
		cout<<"(5)小於等於運算"<<endl;
		cout<<"(6)不等於運算"<<endl;
		cin>>classb;
		switch(classb)
		{
			case 1:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				cout<<"請指定b的值"<<endl;
				cin>>b;
				cout<<"a>b的結果為"<<(a>b)<<endl;
				break;
			case 2:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				cout<<"請指定b的值"<<endl;
				cin>>b;
				cout<<"a<b的結果為"<<(a<b)<<endl;
				break;
			case 3:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				cout<<"請指定b的值"<<endl;
				cin>>b;
				cout<<"a=b的結果為"<<(a==b)<<endl;
				break;
			case 4:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				cout<<"請指定b的值"<<endl;
				cin>>b;
				cout<<"a>=b的結果為"<<(a>=b)<<endl;
				break;
			case 5:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				cout<<"請指定b的值"<<endl;
				cin>>b;
				cout<<"a<=b的結果為"<<(a<=b)<<endl;
				break;
				break;
			case 6:
				cout<<"請指定a的值"<<endl;
				cin>>a;
				cout<<"請指定b的值"<<endl;
				cin>>b;
				cout<<"a!=b的結果為"<<(a!=b)<<endl;
				break;
			default:
				cout<<"您輸入錯誤代碼了!\a"<<endl; 
				break;
			}
	break;
		
	case 3:
		cout<<"請選擇想運算的模式";
		cout<<"(1)AND運算"<<endl;
		cout<<"(2)OR運算"<<endl;
		cout<<"(3)NOT運算"<<endl;
		cout<<"(4)XOR運算"<<endl;
		cout<<"(5)移位運算"<<endl;
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
				cout<<"您輸入錯誤代碼了!\a"<<endl; 
				break;
		}
	break;
	case 4:
		cout<<"請選擇想運算的模式";
		cout<<"(1)加法指定運算運算"<<endl;
		cout<<"(2)減法指定運算"<<endl;
		cout<<"(3)乘法指定運算"<<endl;
		cout<<"(4)除法指定運算"<<endl;
		cout<<"(5)餘數指定運算"<<endl;
		cout<<"(6)XOR位元指定運算"<<endl;
		cout<<"(7)AND位元指定運算"<<endl;
		cout<<"(8)OR位元指定運算"<<endl;
		cout<<"(9)位元右移指定運算"<<endl;
		cout<<"(10)位元左移指定運算"<<endl;
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
				cout<<"您輸入錯誤代碼了!\a"<<endl; 
				break;
			
		}
	break;
			
	default:
		cout<<"您輸入錯誤代碼了!\a"<<endl; 
		break;
	}
	cout<<endl<<"-----------------------------"<<endl<<"執行結束，請輸入數字按enter結束此程序。";
	cin>>a;
	 
}
