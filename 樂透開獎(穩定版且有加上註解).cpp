#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int same(int temp,int *num,int lenth){//引數說明:
    int a;
    for(a=0;a<lenth;a++){
        if(temp==*(num+a)){
            return 0;
        }
    }
    return 1;
    //○是不符合規定(有重複)，一是符合規定(沒有重複)
}//此函數的用途為:測試陣列中的元素有沒有重複的元素
//若有回傳0 沒有回傳1

int main (){
    srand(time(NULL));
    int num[6],i;
    for(i=0;i<=5;i++){
        while(1){
            num[i]=rand()%49+1;
            if(same(num[i],num,i)==1){
                break;
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
