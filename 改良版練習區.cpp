#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
int main(){
    int randnum[4],guessnum[4],irand,input,i,j,same,anstime,a,b,z;
    srand(time(NULL));
        for(i=0;i<=3;i++){
        do{
            same=0;
            irand=rand()%10;
            for(j=0;j<i;j++){
                if(randnum[j]==irand){
                    same=1;
                    break;
                }
            }
        }while((same==1)||((i==0)&&(irand==0)));
        randnum[i]=irand;
        cout<<randnum[i];
    }
    while(1){
        a=0;
        b=0;
        cout<<endl<<"please enter the number!(Four digits cannot be repeated)"<<endl;
        cin>>input;
        int temp=10;
        for(i=3;i>=0;i--){

            guessnum[i]=input%temp;
            input=input-guessnum[i];
            temp=temp*10;
        }
        guessnum[0]=guessnum[0]/1000;
        guessnum[1]=guessnum[1]/100;
        guessnum[2]=guessnum[2]/10;
        cout<<endl;
        for(i=0;i<=3;i++)cout<<guessnum[i]<<",";//顯示拆解結果
        for(i=0;i<=3;i++){
            for(j=0;j<=3;j++){
                if(randnum[i]==guessnum[j]){
                    if(i==j){
                        a++;
                    }
                    else{
                        b++;
                    }
                }
            }
        }
        if(a==4){
            cout<<"\n\nBingo!You win the game!"<<endl;
            cout<<"you guess"<<anstime<<"times"<<endl;
            system("pause");
            break;
        }
        else{
            cout<<"\nHint"<<a<<"A"<<b<<"B";
        }
    }

    return 0;
}
