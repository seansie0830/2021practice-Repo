#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int same(int,int*,int);
int main (){
    srand(time(NULL));
    cout<<"\n";
        int number[6];
        int flag=0;
        int tempData,coflag,i,j;
        int *pointer=number;
        i=0;
        while(i<=5){
            number[i]=rand()%1+49;
            for(j=0;j<i;j++)
                {
                    if(number[j]==number[i]){
                        i--;
                        break;
                }

                }
        i++;

}
for(i=0;i<=5;i++){
    cout<<number[i]<<"\t";
}
}
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
