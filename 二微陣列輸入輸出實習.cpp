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
			cout<<"�п�J"<<i+1<<"���P�Ǫ�"<<subject[j]<<"���Z\n";
			cin>>score[i][j];
		score[i][3]=score[i][0]+score[i][1]+score[i][2];//�p���`�� 
		score[i][4]=score[i][3]/3;//�p�⥭������ 
		}	
	}
	cout<<"�y��\t���\t�ƾ�\t�^��\t�`��\t����\n";
	for(i=0;i<=2;i++){
		cout<<i+1<<"\t";
		for(j=0;j<=4;j++){
			cout<<score[i][j]<<"\t";
		}
		cout<<"\n"	;
	}
		 
} 
