#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char password[30];
    char inputData[30];
    cin>>password;
    cin>>inputData;
    if(strcmp(inputData,password)==0){
        cout<<"\n正確";
    }
    else{
        cout<<"\n錯誤";
    }
}
/*
結論
strcmp函數可以放入字元陣列
cin函數可以被呼叫二次
