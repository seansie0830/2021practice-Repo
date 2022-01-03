#include<iostream>
using namespace std;

int main (){
    int x[3][4][6];
    int *ptr;
    ptr=&x[0][0][0];
    cout<<ptr<<endl;
    ptr=&x[2][3][2];
    cout<<ptr<<endl;
}
