/*今日所練習的函數(函括在ctime標頭檔):
time()
原型:time_t time(time_t *timeptr)
引數:指標變數 
功能:將格林威治時間1970年1月1日0時0分0秒到目前系統時間所經過的秒數
，儲存在輸入的指標指向的變數。
傳回值:將格林威治時間1970年1月1日0時0分0秒到目前系統時間所經過的秒數


difftime()
原型: double difftime(time_t time1 tiem_time2)
傳回值:time1-time2(double)
功能:計算time1-time2的時間差
 
*/ 
#include<ctime>
#include<iostream>
#include<windows.h>
using namespace std;
int main (){
	int i;
	time_t first,last;
	first=time(NULL);
	for(i=0;i<=50;i++){
		cout<<"謝喬恩";
		system("cls");
	}
	last=time(NULL);
	cout<<"first="<<first<<"\tlast="<<last<<endl;
	cout<<"時間差為"<<difftime(last,first);
} 
