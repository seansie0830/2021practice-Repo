#include<iostream>
using namespace std;
int factorial(int);
int main (){
    int input,ouput;
    ouput=1;
    cout<<"��J�@�ӼƦr�A����|��X�Ӽƪ�����"<<endl;
    cin>>input;
    cout<<"���Ʀr��"<<factorial(input);

}
int factorial (int n){
    if(n<0) return -1; //���Ȥ��X�k
    if(n==0) return 1; //���������@
    else return(n*factorial(n-1));//�I
}
