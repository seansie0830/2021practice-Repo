//�ǧ}�I�s�禡�m��
#include<iostream>
using namespace std;
void triangle(float,float,float*);
int main(){
	float a,b,c,answer;
	answer=0;
	cout<<"�п�J��";
	cin>>a;
	cout<<"�п�J��";
	cin>>b;
	cout<<"�쥻answer�w�]����=\n"<<answer;
	triangle(a,b,&answer);//�ǤJa b���ȻPanswer ����} 
	cout<<"�g�L�禡�B�z��answer��"<<answer;
	
}
void triangle(float bottom,float height,float *answer){
	float *pointer;
	pointer=answer;
	*pointer=bottom*height/2;
	
	
	
}
