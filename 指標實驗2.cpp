#include<iostream>
using namespace std;
int main (){
	int a,b,c,d,e;//宣告變數
	int array[10]={12,15,14,15,65,85,96,45,78,41};
	cout<<"int a,b,c,d,e;//宣告變數\n";
	int *ptr,*ptr2;//宣告指標
	cout<<"int *ptr\n";//宣告指標;
	ptr=&a;
	cout<<"ptr=a//測試不加&取址\n";
	cout<<"失敗\n";
	cout<<"取址必須加&號\n";
	cout<<"ptr儲存"<<ptr; 
	ptr=&array[1];
	ptr2=array;
	cout<<"ptr=array;測試陣列取址不+&";
	cout<<"ptr="<<ptr<<"ptr2="<<ptr2;
} 
