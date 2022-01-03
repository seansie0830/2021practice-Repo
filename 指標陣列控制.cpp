#include<iostream>
using namespace std;
int main(){
	int array1[10]={10,21,32,34,54,65,76,78,85,19,};
	int *ptrForArray=array1;
	int i;
	for(i=0;i<=9;i++)
	{
		cout<<*(ptrForArray+i)<<"\t";//記得括號!，沒有括號會發生錯誤!! 
		cout<<array1[i]<<"\n";
	 } 
}
