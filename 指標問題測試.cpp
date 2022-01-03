/*
指標實驗
(一)環境:變數:iN1,iN2 指標:ptr1,ptr2  陣列:array
(二)實驗內容: 
(1)位址是否可以設定到變數呢(iN1=&iN2(位址))
結果:不行 
#include<iostream> 
using namespace std;
int main (){
	int *iptr;
	int iN1,iN2;
	int array[10];
	iN1=&iN2;
	//錯誤代碼 	[Error] invalid conversion from 'int*' to 'int' [-fpermissive]

}
(2)測試取址(ptr1=&iN1) 
結果:可以
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	ptr1=&iN1;
	
} 
(3)指標依址取值
結果:可以
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	iN1=20;
	cout<<"iN1="<<iN1;
	ptr1=&iN1;
	cout<<"*ptr1="<<*ptr1;
} 
(4)指標依址改值:

#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	iN1=20;
	cout<<"<out>iN1="<<iN1<<endl;
	ptr1=&iN1;
	cout<<"<cmd> *ptr1=100\n";
	*ptr1=100;
	cout<<"<out>iN1="<<iN1;
	cout<<"<cmd> *ptr1=200\n";
	*ptr1=200;
	cout<<"<out>iN1="<<iN1;
}
(5)存取陣列(ptr1=&array[0]基本延伸型)(包括存取與改變):
 #include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	array[0]=100;
	cout<<"<cmd>array[0]=100"<<endl;
	cout<<"<out> array[0]="<<array[0]<<endl;
	ptr1=&array[0];
	cout<<"<cmd>ptr1=&array[0];"<<endl;
	cout<<"<out>*ptr1=(取值)"<<*ptr1<<endl;
	*ptr1=200;
	cout<<"<cmd>*ptr1=200(改值)"<<endl;
	cout<<"<out>array[0]="<<array[0]<<endl;	
}
(6)顯示陣列位址
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	bool array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
結果:每往下一個元素位址就會增加 1
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	short array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
結果:每往下一個元素位址就會增加 2
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	long array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
結果:每往下一個元素位址就會增加 4
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	double array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
結果:每往下一個元素位址就會增加 8
//結論:陣列每往下一個元素增加的數目會與該資料的大小相同
Ex:long型態的陣列的大小為四，
則該陣列每往下一個資料位址就會增加四 
(7)特殊陣列取址法(釐清) 
	A.ptr1=array[]  (X)  ->同下 
	B.ptr1=&array[0](x)  ->無法執行 
	C.ptr1=array    (O)  ->視為array[0] 
	D.(基礎版)ptr1=&array[0] 
#include<iostream>
using namespace std;
int main (){
	int *ptr1,*ptr2;
	int iN1,iN2,i;
	int array[10];
	cout<<"<cmd>&array[0]=";
	cout<<&array[0]<<endl;
	cout<<"<cmd>ptr1=array\n";
	ptr1=array;
	cout<<"<out>ptr1="<<ptr1;

}
*/
#include<iostream>
using namespace std;
int main (){
	int *ptr1,*ptr2;
	int iN1,iN2,i;
	int array[10];
	cout<<"<cmd>&array[0]=";
	cout<<&array[0]<<endl;
	cout<<"<cmd>ptr1=array\n";
	ptr1=&array[];
	cout<<"<out>ptr1="<<ptr1;

}
