#include<iostream>
using namespace std;
int main(){
	int array1[10]={10,21,32,34,54,65,76,78,85,19,};
	int *ptrForArray=array1;
	int i;
	for(i=0;i<=9;i++)
	{
		cout<<*(ptrForArray+i)<<"\t";//�O�o�A��!�A�S���A���|�o�Ϳ��~!! 
		cout<<array1[i]<<"\n";
	 } 
}
