#include<iostream>
using namespace std;
int same(int temp,int *num,int lenth){
    int a;
    for(a=0;a<lenth;a++){
        if(temp==*(num+a)){
            return 0;
        }
    }
    return 1;
    //���O���ŦX�W�w�A�@�O�ŦX�W�w
}

int main (){
    int num[6],i;
    for(i=0;i<=5;i++){
        cout<<"�{�b�}�l��J��"<<i+1<<"��\n";
        cin>>num[i];
        cout<<"��"<<i+1<<"����"<<num[i]<<endl;
        cout<<"���same�����G��"<<same(num[i],num,i)<<endl;
    }
}
