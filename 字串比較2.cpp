#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char password[30];
    char inputData[30];
    cin>>password;
    cin>>inputData;
    if(strcmp(inputData,password)==0){
        cout<<"\n���T";
    }
    else{
        cout<<"\n���~";
    }
}
/*
����
strcmp��ƥi�H��J�r���}�C
cin��ƥi�H�Q�I�s�G��
