#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void swaping(int*,int*);
void sorting(int*,int);
void experimentSort(int*,int);
int main() {
    int Array[10];
    int i,j;
    srand(time(NULL));
    for(i=0;i<10;i++)Array[i]=rand()%100;
    cout<<"Before sorting ......."<<endl;
    for(i=0;i<=10;i++)cout<<Array[i]<<"\t";
    cout<<"\nAfter sorting ....."<<endl;
    sorting(Array,10);
    for(i=0;i<=10;i++)cout<<Array[i]<<"\t";
    cout<<"\nAfter experiment sorting....."<<endl;
    experimentSort(Array,10);
    for(i=0;i<=10;i++)cout<<Array[i]<<"\t";
    return 0;

}
void swaping(int *a,int *b){
    int newA,newB;
    newA=*b;
    newB=*a;
    *a=newA;
    *b=newB;
}
void sorting(int *first,int lenth){
    int i,j;
    for(i=0;i<lenth;i++){
        for(j=0;j<lenth;j++){
            if(*(first+j)>*(first+j+1)){
                swaping((first+j),(first+(j+1)));
            }

        }
    }
}
void experimentSort (int *first,int lenth){
    int i,j;
    //����ʪ���w�ƧǪk�A�]���W������k�S���F��̨ήĲv�C
    //https://emn178.pixnet.net/blog/post/93779892
    //�̫�@�ӬO�w�g�Q�Ʀn������
    //�Y�S���o�ͥ洫�A�h�i�H���X�j��(break)�C
}
