/*遞迴實作2-費氏數列、等差數列的和。
公式 f(n)=f(n-1)+f(n-2) (且n>2)  f(1)=f(2)=1

*/
#include<iostream>
using namespace std;
int Fibonacci(int);//費氏數列的遞迴函數
int sum(int);
int factorial(int);
int main(){
    int i;
    cout<<"費氏數列從第一項到第十項如右\t\t";
    for(i=1;i<=10;i++)cout<<Fibonacci(i)<<"\t";
    cout<<endl;
    cout<<"Sn=1+2+3+....+n從第一項到第十項如右\t";
    for(i=1;i<=10;i++)cout<<sum(i)<<"\t";
    cout<<"\n階乘從第一項到第十項如右\t\t";
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
    // 將問題分解成一個小問題(指『n*』，也就是基本單位)
    //與另一個大問題(指『factorial(n-1)』，也就是較大的單位)
}


