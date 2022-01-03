//傳址呼叫函式練習
#include<iostream>
using namespace std;
void triangle(float,float,float*);
int main(){
	float a,b,c,answer;
	answer=0;
	cout<<"請輸入底";
	cin>>a;
	cout<<"請輸入高";
	cin>>b;
	cout<<"原本answer預設的值=\n"<<answer;
	triangle(a,b,&answer);//傳入a b的值與answer 的位址 
	cout<<"經過函式處理後answer值"<<answer;
	
}
void triangle(float bottom,float height,float *answer){
	float *pointer;
	pointer=answer;
	*pointer=bottom*height/2;
	
	
	
}
