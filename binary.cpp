#include<iostream>
#include<string>
using namespace std;
string binary(string,int);
int main (){
    int a;
    while(cin>>a){
        cout<<binary("\n",a);
    }
}
string binary(string out,int in){
    if(in==0) return out;
    else if(in%2==0)return binary("0"+out,in/2);
    else return binary("1"+out,(in-1)/2);
}
