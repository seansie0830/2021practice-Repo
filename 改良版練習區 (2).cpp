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
        cout<<randnum[i];//之後函數化化變成rand_gen，內有函數same 
    }
    cout<<"\n\t         歡迎進入謝喬恩遊戲\n";
    cout<<"--------------------------------------------------------\n";
    cout<<"\t\t      遊戲說明\n";
    cout<<"(1)系統會隨機產生一個四位數，您必須猜出那個四位數。\n該數字的規定為四位不重複的數字。\n";
    cout<<"(2)在猜數字的同時，系統會給予提示，提示的範例如下。\n\n";
    cout<<"  格式是XAYB(EX:1A2B)。\n";
    cout<<"  A代表位置與數字都對 Ex:數字是1234，您猜1789   1的部分這樣有1A"<<endl;
    cout<<"  B代表數字對但是位置不對 Ex:數字是1234 您猜1729 2的部分有1B"<<endl;
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
        guessnum[2]=guessnum[2]/10;//拆解guess部分測試成功，之後函數化變成cut 
        cout<<endl;
        for(i=0;i<=3;i++)cout<<guessnum[i]<<",";
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
        }//希望之後可以函數化，變成judge 
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
