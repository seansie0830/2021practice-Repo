#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int same(int temp,int *num,int lenth){//�޼ƻ���:
    int a;
    for(a=0;a<lenth;a++){
        if(temp==*(num+a)){
            return 0;
        }
    }
    return 1;
    //���O���ŦX�W�w(������)�A�@�O�ŦX�W�w(�S������)
}//����ƪ��γ~��:���հ}�C�����������S�����ƪ�����
//�Y���^��0 �S���^��1

int main (){
    srand(time(NULL));
    int num[6],i;
    for(i=0;i<=5;i++){
        while(1){
            num[i]=rand()%49+1;
            if(same(num[i],num,i)==1){
                break;
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
