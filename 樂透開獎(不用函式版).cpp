#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main (){
    srand(time(NULL));
    int num[6],i,isame;
    for(i=0;i<=5;i++){
        isame=0;//�C������ɡA"�O�_����"�ܼƭn�k�s�A���M�û��L�k����while�j��C
        while(isame==0){
            isame=1;
            num[i]=rand()%49+1;
            int a;
            for(a=0;a<i;a++){
                if(num[i]==*(num+a)){
                isame=0;
                }
            }
        }

        cout<<num[i]<<"\t";
    }

}
/*

	(1)�Y�J��ӽ������{���A��ĳ�i�H��{����Ѧ��\�h�����A
	�����禡�A�@�@���աA�T�w�S���D�~������C
	ex:�������Ҥl�A�{�����P�ɥ]��F���ͶüƻP�T�{���S�����ͬۦP���ƪ������A
		�o�˪��ܫ�ĳ���}���աA���G�ӳ������i�H���ɫJ�A
		�~��G��ok�������X�ִ��աA�o�ˤ@�ӡA���D���U�Ӥ�(�ѦҤU��������)�C
	<��h>:���Χ�p�����d�n�A�~��X�֦��j������
		   �@���B�z�@�Ӱ��D(�p���D�B�h�Ӥp���D�X�ֵ�)�A���C���D���x���סC
*/
