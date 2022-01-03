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

    if(n==1)return 1;
    else if(n==2) return 2;
    else if(n==3) return 3;
    else return cows(n-1)+cows(n-3);
}
