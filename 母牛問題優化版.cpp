/*�e�����n
�������D���N�O�O��ƦC���ܤƪ�
�����p�U
�O��: f(n)=f(n-1)+f(n-2) (n>2) f(1)=f(2)=1
����: f(n)=f(n-1)+f(n-3) (n>3)  f(1)=1 f(2)=2  f(3)=3
�G�̫ܬۦ��A�u�O�Ʀr���I���P

���e�������D�ϥλ��j�ɡA�]���o�ͤF�\�h���ƭp�⪺���ΡC
EX;f(10)=f(9)+f(8)=f(8)+f(7)+f(7)+f(6)  //f(8)�PF(7)�@�@���ƤF�G��
=f(7)+f(6)+f(6)+f(5)+f(6)+f(5)+f(5)+f(4)//f(6)�Pf(5)�@�@���ƤF�T��
�o��@�ӡA��n���ͫܤj���O��ƮɡA����Ĳv�@�w�|���ΡC

�ҥH�o�̥ΰj��ӳB�z�C
*/
#include<iostream>
using namespace std;
int cows(int);
int main(){
    int a;
    while(1){
    cin>>a;
    if(a==0) return 0;
     else {
        cout<<cows(a)<<endl;

    }
    }

            }
int cows(int n){
    int tempcows[n+3],i;
    for(i=1;i<=3;i++)tempcows[i]=n;
    for(i=4;i<=n;i++){
        tempcows[i]=tempcows[i-1]+tempcows[i-3];
    }
    return tempcows[n];
   // else return cows(n-1)+cows(n-3);
}
