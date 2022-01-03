#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
#include<cmath>
using namespace std;
int asame=0;
int bsame=0;
int Rand[5],Guess[5];
int dismantle(int,int*);
int samenum(int);
int frand(void);
void judge(int,int);
int randnum,guessnum,a,guesstime;
int main(){
    srand(time(NULL));
    cout<<"\n\t         歡迎進入謝喬恩遊戲\n";
    cout<<"--------------------------------------------------------\n";
    cout<<"\t\t      遊戲說明\n";
    cout<<"(1)系統會隨機產生一個四位數，您必須猜出那個四位數。\n該數字的規定為四位不重複的數字。\n";
    cout<<"(2)在猜數字的同時，系統會給予提示，提示的範例如下。\n\n";
    cout<<"  格式是XAYBZC(EX:1A2B1C)。\n";
    cout<<"  A代表位置與數字都對 Ex:數字是1234，您猜1789   1的部分這樣有1A"<<endl;
    cout<<"  B代表數字對但是位置可能不對 Ex:數字是1234 您猜1729 2的部分有1B"<<endl;
    cout<<"  C代表位置跟數字都不對 EX:數字是1234您猜7890 是4C\n\n"<<endl;
    cout<<"輸入1進入遊戲，輸入0離開遊戲。"<<endl;
    cin>>a;
    if(a==0){
        cout<<"\n\n\n再見!!";
        Sleep(1000);
        return 0;
    }
    randnum=frand();
    cout<<"\n\n\n\t"<<randnum;
    while(1){

        cout<<"\n------------------------------";
        cout<<"\n請輸入您猜測的數字(須為四個相異數字否則會出現錯誤)\n";
        cin>>guessnum;
        judge(randnum,guessnum);
        if(asame==4){
            cout<<"\n被你猜中了!\n"<<"您猜了"<<guesstime<<"次"<<"\n輸入任何數字並按下enter離開";
            break;
        }
        else{
            cout<<"\n猜錯了!提示為"<<asame<<"A"<<bsame<<"B"<<4-asame-bsame<<"C"<<endl;
            guesstime++;
        }
    }
    cin>>a;
    return a;
}
void judge(int rand,int guess){

    int i,j;
    asame=0;
    bsame=0;
    dismantle(rand,Rand);
    dismantle(guess,Guess);
    for(i=1;i<=4;i++){
            for(j=0;j<=4;j++){
                if(Rand[i]==Guess[j]){
                    if(i==j){
                        asame++;
                        break;
                    }
                    else{
                        bsame++;
                        break;
                    }
            }

        }
    }
}
int frand(void){//ok
    int i,j,appear;
    for(i=0;i<=3;i++){
        while(1){
            if(i==0){
                Rand[i]=rand()%9+1;
            }
            else{
                Rand[i]=rand()%9;
            }
            for(j=0;j<i;j++){
              if(Rand[i]==Rand[j]){
                appear=1;
              }
              else{
                appear=0;
              }
            }
            if(appear==0){
                break;
            }
        }

    }
    return Rand[0]*1000+Rand[1]*100+Rand[2]*10+Rand[3];
}
int dismantle(int input,int* output){
    int i;
    for(i=0;i<=4;i++){
       double dI=i;
       int divisor=pow(10,dI);
       *(output+i)=input%divisor;
       input=input-*(output+i);
    }
    for(i=1;i<=4;i++){
        double dI;
        dI=i;
        *(output+i)=*(output+i)/pow(10,dI-1);
        cout<<output[i];
    }

}

/*本次除錯心得
注意陣列的數目
進度:分解成功
asame功能正常
*/
