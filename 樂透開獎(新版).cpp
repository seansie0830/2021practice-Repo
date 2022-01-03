#include<iostream>
#include<ctime>
#include<cstdlib>
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
