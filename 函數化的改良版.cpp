#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
void randgen(int*);
void cut(int,int*);
void judge(int*,int*);
int a,b;
int main(){
    int guessnum[4],randnum[4],irand,input,i,j,same,anstime,z;
    srand(time(NULL));
    randgen(randnum);
    while(1){
        a=0;
        b=0;
        cout<<endl<<"please enter the number!(Four digits cannot be repeated)"<<endl;
        cin>>input;
        cut(input,guessnum);
        judge(randnum,guessnum);
        if(a==4){
            cout<<"\n\nBingo!You win the game!"<<endl;
            cout<<"you guess\t"<<anstime<<"\ttimes"<<endl;
            system("pause");
            break;
        }
        else{
            cout<<"\nHint"<<a<<"A"<<b<<"B";
        }
    }

    return 0;
}
void randgen(int*output){
    int i,j,same,irand;
    for(i=0;i<=3;i++){
        do{
            same=0;
            irand=rand()%10;
            for(j=0;j<i;j++){
                if(*(output+j)==irand){
                    same=1;
                    break;
                }
            }
        }while((same==1)||((i==0)&&(irand==0)));
        *(output+i)=irand;
        cout<<*(output+i);
    }
    cout<<endl;
}
void judge(int *rand,int *guess){
    int i,j;
    for(i=0;i<=3;i++){
            for(j=0;j<=3;j++){
                if(*(rand+i)==*(guess+j)){
                    if(i==j){
                        a++;
                    }
                    else{
                        b++;
                    }
                }
            }
        }
}
void cut(int input,int *output){
    int temp=10;
    int t;
    for(t=3;t>=0;t--){
        *(output+t)=input%temp;
        input=input-*(output+t);
        temp=temp*10;
    }
    *(output+0)=*(output+0)/1000;
    *(output+1)=*(output+1)/100;
    *(output+2)=*(output+2)/10;
    cout<<endl;
    //for(t=0;t<=3;t++)cout<<*(output+t)<<",";
}
