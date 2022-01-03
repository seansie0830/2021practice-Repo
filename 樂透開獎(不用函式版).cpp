#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main (){
    srand(time(NULL));
    int num[6],i,isame;
    for(i=0;i<=5;i++){
        isame=0;//每次執行時，"是否重複"變數要歸零，不然永遠無法執行while迴圈。
        while(isame==0){
            isame=1;
            num[i]=rand()%49+1;
            int a;
            for(a=0;a<i;a++){
                if(num[i]==*(num+a)){
                isame=0;
                }
            }
        }

        cout<<num[i]<<"\t";
    }

}
/*

	(1)若遇到太複雜的程式，建議可以把程式拆解成許多部份，
	做成函式，一一測試，確定沒問題才停止除錯。
	ex:此次的例子，程式中同時包函了產生亂數與確認有沒有產生相同的數的部份，
		這樣的話建議分開測試，等二個部份都可以的時侯，
		才把二個ok的部份合併測試，這樣一來，問題成愈來少(參考下面的說明)。
	<原則>:先用把小部份搞好，才能合併成大的部份
		   一次處理一個問題(小問題、多個小問題合併等)，降低問題的困難度。
*/
