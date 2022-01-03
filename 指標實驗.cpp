#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int *iptr1,*iptr2;//宣告指標，宣告方法: 指向的變數類型  *指標名稱(若要宣告多個用逗點隔開); 
	int iN1,iN2;
	cout<<"請輸入iN1的數值";
	cin>>iN1;
	cout<<"請輸入iN2的數值";
	cin>>iN2;
	iptr1=NULL;//將此指標指向(NULL)就是不指向任何一個數，裡面會出現隨機的位址(因為沒有指定)  
	cout<<setw(15)<<"\t"<<setw(15)<<"iN1"<<setw(15)<<"iN2"<<setw(15)<<"iptr1"<<setw(15)<<"iptr2"<<endl;
	cout<<setw(15)<<"iptr1=NULL;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	//印出結果 
	iptr2=NULL;
	cout<<setw(15)<<"iptr2=NULL;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	iptr1=&iN1;//將指標iptr1的值設為變數iN1的位址，初始化指標:指標名稱=&指向的變數。 
	cout<<setw(15)<<"iptr1=&iN1;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	cout<<"\n此階段*iptr1(*iptr1指標指向的位址)="<<*iptr1<<"\t*iptr2(*iptr1指標指向的位址)="<<"指標尚未初始化"<<endl;
	iptr2=&iN2;//將指標iptr2的值設為變數iN2的位址
	cout<<setw(15)<<"iptr2=&iN2;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	cout<<"\n此階段*iptr1(*iptr1指標指向的位址)="<<*iptr1<<"\t*iptr2(*iptr1指標指向的位址)="<<*iptr2<<endl;
	cout<<"依址取值測試*iptr1="<<*iptr1;
	/*   *iptr1代表一個位址與iptr1所儲存的位址相同的變數(指向的變數)，iptr1儲存的位址就是iN1的位址，
		 也就是說，*iptr1就是iN1，可以讀取或改變iN1(指向的變數)的值 
		 但是若指標尚未初始化(指向NULL或未設定)對於該指標的依址(指標內存的位址)取值功能會失效(發生錯誤) 
	*/	
}
