/*����ҽm�ߪ����(��A�bctime���Y��):
time()
�쫬:time_t time(time_t *timeptr)
�޼�:�����ܼ� 
�\��:�N��L�ªv�ɶ�1970�~1��1��0��0��0���ثe�t�ήɶ��Ҹg�L�����
�A�x�s�b��J�����Ы��V���ܼơC
�Ǧ^��:�N��L�ªv�ɶ�1970�~1��1��0��0��0���ثe�t�ήɶ��Ҹg�L�����


difftime()
�쫬: double difftime(time_t time1 tiem_time2)
�Ǧ^��:time1-time2(double)
�\��:�p��time1-time2���ɶ��t
 
*/ 
#include<ctime>
#include<iostream>
#include<windows.h>
using namespace std;
int main (){
	int i;
	time_t first,last;
	first=time(NULL);
	for(i=0;i<=50;i++){
		cout<<"�³쮦";
		system("cls");
	}
	last=time(NULL);
	cout<<"first="<<first<<"\tlast="<<last<<endl;
	cout<<"�ɶ��t��"<<difftime(last,first);
} 
