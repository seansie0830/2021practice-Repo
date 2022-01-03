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
    //○是不符合規定，一是符合規定
}

int main (){
    int num[6],i;
    for(i=0;i<=5;i++){
        cout<<"現在開始輸入第"<<i+1<<"項\n";
        cin>>num[i];
        cout<<"第"<<i+1<<"項為"<<num[i]<<endl;
        cout<<"函數same的結果為"<<same(num[i],num,i)<<endl;
    }
}
