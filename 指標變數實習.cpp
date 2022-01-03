//利用指標把一個陣列全部元素的位址都列印出來!
/*
本次目的:
(1)列印出一個陣列所有元素的位址 
(2)測試指標是不是在1個階段中可以指向不同的變數(初始化兩次) 
*/ 
#include<iostream>
using namespace std;
int main()
{
	int array1[10]={12,15,45,63,2,51,42,12,69,57};
	int *ptr;
	int i;
	for(i=0;i<=9;i++)
	{
		ptr=&array1[i];//先將指標ptr初始化，指向陣列編號i的元素 
		cout<<"陣列元素array1["<<i<<"]="<<array1[i]<<"\t元素位址&array["<<i<<"]="<<&array1[i]<<"\t\n依址取值(變數或元素)*ptr(指向array1["<<i<<"]="<<*ptr<<endl;
	}
	cout<<"\n----------------------------------------------------"<<endl;
	cout<<"目前進入第二階段測試";
	int test=10;
	int *testPt;
	cout<<"test="<<test<<endl;
	cout<<"testPt(目前尚未指定)"<<testPt<<endl;//未指定的測試 
	testPt=&test;
	cout<<"testPt=&test"<<endl;
	cout<<"&test(取址的運算子)="<<&test<<endl;
	cout<<"testPt(讀取在指標中的位址=)"<< testPt<<endl;
	cout<<"*testPt(依址取值(變數或元素=)"<<*testPt<<endl;
	*testPt=30;
	cout<<"*testPt=30;"<<"測試test有沒有被改變  test="<<test; 
	cout<<test;

}
