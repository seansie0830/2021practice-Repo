/*���j��@2-�O��ƦC�B���t�ƦC���M�C
���� f(n)=f(n-1)+f(n-2) (�Bn>2)  f(1)=f(2)=1

*/
#include<iostream>
using namespace std;
int Fibonacci(int);//�O��ƦC�����j���
int sum(int);
int factorial(int);
int main(){
    int i;
    cout<<"�O��ƦC�q�Ĥ@����ĤQ���p�k\t\t";
    for(i=1;i<=10;i++)cout<<Fibonacci(i)<<"\t";
    cout<<endl;
    cout<<"Sn=1+2+3+....+n�q�Ĥ@����ĤQ���p�k\t";
    for(i=1;i<=10;i++)cout<<sum(i)<<"\t";
    cout<<"\n�����q�Ĥ@����ĤQ���p�k\t\t";
    for(i=1;i<=10;i++)cout<<factorial(i)<<"\t";
    return 0;

}
int Fibonacci(int n){
    if(n==1|n==2)return 1;
    if(n<1) return -1;
    else return(Fibonacci(n-1)+Fibonacci(n-2));
}
int sum(int n){
    if(n==0) return 0;
    if(n<0) return -1;
    else return (n+sum(n-1));
}
int factorial(int n){
    if(n<0) return -1;
    else if(n==0) return 1;
    else return n*factorial(n-1);
    // �N���D���Ѧ��@�Ӥp���D(���yn*�z�A�]�N�O�򥻳��)
    //�P�t�@�Ӥj���D(���yfactorial(n-1)�z�A�]�N�O���j�����)
}


