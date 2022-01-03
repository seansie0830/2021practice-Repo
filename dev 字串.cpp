#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
int main(){
    char *first;
    char *second;
    cin>>first>>second;
    if(strcmp(first,second)==0){
        cout<<"二字串相同";
    }
    else{
        cout<<"二字串不同";
    }
}


