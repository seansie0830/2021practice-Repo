#include<iostream>
using namespace std;
int factorial(int);
int main (){
    int input,ouput;
    ouput=1;
    cout<<"輸入一個數字，之後會輸出該數的階乘"<<endl;
    cin>>input;
    cout<<"此數字為"<<factorial(input);

}
int factorial (int n){
    if(n<0) return -1; //此值不合法
    if(n==0) return 1; //○階乘為一
    else return(n*factorial(n-1));//呼
}
