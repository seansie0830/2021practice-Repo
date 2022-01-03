/*前情提要
母牛問題其實就是費氏數列的變化版
公式如下
費氏: f(n)=f(n-1)+f(n-2) (n>2) f(1)=f(2)=1
母牛: f(n)=f(n-1)+f(n-3) (n>3)  f(1)=1 f(2)=2  f(3)=3
二者很相似，只是數字有點不同

之前母牛問題使用遞迴時，因為發生了許多重複計算的情形。
EX;f(10)=f(9)+f(8)=f(8)+f(7)+f(7)+f(6)  //f(8)與F(7)一共重複了二次
=f(7)+f(6)+f(6)+f(5)+f(6)+f(5)+f(5)+f(4)//f(6)與f(5)一共重複了三次
這麼一來，當要產生很大的費氏數時，執行效率一定會不佳。

所以這裡用迴圈來處理。
*/
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
    int tempcows[n+3],i;
    for(i=1;i<=3;i++)tempcows[i]=n;
    for(i=4;i<=n;i++){
        tempcows[i]=tempcows[i-1]+tempcows[i-3];
    }
    return tempcows[n];
   // else return cows(n-1)+cows(n-3);
}
