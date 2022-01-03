#include<iostream>
#include<string>
using namespace std;
int main()
{
	double score [3][5];
	char subject[3][8]={{'C','h','i','n','e','s','e'},{'M','a','t','h'},{'E','n','g','l','i','s','h'}};

	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<"請輸入"<<i+1<<"號同學的"<<subject[j]<<"成績\n";
			cin>>score[i][j];
		score[i][3]=score[i][0]+score[i][1]+score[i][2];//計算總分 
		score[i][4]=score[i][3]/3;//計算平均分數 
		}	
	}
	cout<<"座號\t國文\t數學\t英文\t總分\t平均\n";
	for(i=0;i<=2;i++){
		cout<<i+1<<"\t";
		for(j=0;j<=4;j++){
			cout<<score[i][j]<<"\t";
		}
		cout<<"\n"	;
	}
		 
} 
