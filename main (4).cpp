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
    cout<<"\n\t         �w��i�J�³쮦�C��\n";
    cout<<"--------------------------------------------------------\n";
    cout<<"\t\t      �C������\n";
    cout<<"(1)�t�η|�H�����ͤ@�ӥ|��ơA�z�����q�X���ӥ|��ơC\n�ӼƦr���W�w���|�줣���ƪ��Ʀr�C\n";
    cout<<"(2)�b�q�Ʀr���P�ɡA�t�η|�������ܡA���ܪ��d�Ҧp�U�C\n\n";
    cout<<"  �榡�OXAYBZC(EX:1A2B1C)�C\n";
    cout<<"  A�N���m�P�Ʀr���� Ex:�Ʀr�O1234�A�z�q1789   1�������o�˦�1A"<<endl;
    cout<<"  B�N��Ʀr����O��m�i�ण�� Ex:�Ʀr�O1234 �z�q1729 2��������1B"<<endl;
    cout<<"  C�N���m��Ʀr������ EX:�Ʀr�O1234�z�q7890 �O4C\n\n"<<endl;
    cout<<"��J1�i�J�C���A��J0���}�C���C"<<endl;
    cin>>a;
    if(a==0){
        cout<<"\n\n\n�A��!!";
        Sleep(1000);
        return 0;
    }
    randnum=frand();
    cout<<"\n\n\n\t"<<randnum;
    while(1){

        cout<<"\n------------------------------";
        cout<<"\n�п�J�z�q�����Ʀr(�����|�Ӭ۲��Ʀr�_�h�|�X�{���~)\n";
        cin>>guessnum;
        judge(randnum,guessnum);
        if(asame==4){
            cout<<"\n�Q�A�q���F!\n"<<"�z�q�F"<<guesstime<<"��"<<"\n��J����Ʀr�ë��Uenter���}";
            break;
        }
        else{
            cout<<"\n�q���F!���ܬ�"<<asame<<"A"<<bsame<<"B"<<4-asame-bsame<<"C"<<endl;
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

/*���������߱o
�`�N�}�C���ƥ�
�i��:���Ѧ��\
asame�\�ॿ�`
*/
