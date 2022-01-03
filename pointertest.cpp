#include<iostream>
using namespace std;
int main (){
    int map[3][3];
    int *ptr,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ptr=&map[i][j];
            cout<<"*(map["<<i<<"]["<<j<<"])="<<ptr<<endl;
        }
    }
}

