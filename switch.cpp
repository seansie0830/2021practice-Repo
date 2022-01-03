#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<"請輸入一個星期的第幾天";
	cin>>day;
	switch(day){
		case 1:
			cout<<"星期日";
			break;
		case 2:
			cout<<"星期一";
			break;
		case 3:
			cout<<"星期二";
			break;
		
		case 4:
			cout<<"星期三";
			break;
		case 5:
			cout<<"星期四";
			break;
		case 6:
			cout<<"星期五";
			break;
		case 7:
			cout<<"星期六";
			break;
		default:
			cout<<"輸入錯誤";
			
	}
	
}
