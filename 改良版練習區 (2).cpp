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
        cout<<randnum[i];//�����ƤƤ��ܦ�rand_gen�A�������same 
    }
    cout<<"\n\t         �w��i�J�³쮦�C��\n";
    cout<<"--------------------------------------------------------\n";
    cout<<"\t\t      �C������\n";
    cout<<"(1)�t�η|�H�����ͤ@�ӥ|��ơA�z�����q�X���ӥ|��ơC\n�ӼƦr���W�w���|�줣���ƪ��Ʀr�C\n";
    cout<<"(2)�b�q�Ʀr���P�ɡA�t�η|�������ܡA���ܪ��d�Ҧp�U�C\n\n";
    cout<<"  �榡�OXAYB(EX:1A2B)�C\n";
    cout<<"  A�N���m�P�Ʀr���� Ex:�Ʀr�O1234�A�z�q1789   1�������o�˦�1A"<<endl;
    cout<<"  B�N��Ʀr����O��m���� Ex:�Ʀr�O1234 �z�q1729 2��������1B"<<endl;
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
        guessnum[2]=guessnum[2]/10;//���guess�������զ��\�A�����Ƥ��ܦ�cut 
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
        }//�Ʊ椧��i�H��ƤơA�ܦ�judge 
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
