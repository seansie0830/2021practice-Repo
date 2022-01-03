#include <iostream>
#include <stdio.h>
using namespace std;

void test(int n){
    if(n==0)
        return ;
    cout<<n<<" ";
    test(n-1);
}
int main(void){
    int n;
    cin>>n;
    test(n);
    return 0;
}
