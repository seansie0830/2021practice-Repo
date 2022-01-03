/*
今日函數:
(1)轉換為大寫英字母:strupr()
原型:char*strupr(char*string)
*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char*player[5]={"StevenCurry","KobeBryant","LeBronJames","KevenDurant","JeremyLin"};
    //宣告指標陣列
    int i;
    char *pointer;
    int point[5]={12,63,59,87,45};
    char tempData[20],copyplayer[30];
    for(i=0;i<=4;i++){
        cout<<player[i]<<endl;
    }
    cout<<"-------------------------------------"<<endl;
    cout<<"請輸入球員名稱"<<endl;
    cin.getline(tempData,20);
    strupr(tempData);
    for(i=0;i<=4;i++){
        strcpy(copyplayer,player[i]);
        strupr(copyplayer);
        if(strcmp(tempData,copyplayer)==0){
            cout<<player[i]<<"的分數為"<<point[i]<<"分"<<endl;
            return 0;
        }
        else{
            continue;
        }
    }
    cout<<"您所查詢的球員"<<tempData<<"沒有在資料庫喔!";
    return 0;


}
/*
心得:
(1)不只輸入的字串需要轉換成大(小)寫，不要忘了還有球員的名字也要轉換。
(2)strcpy,strupr中的引數，雖然它的原型是 char * (char *  char * Source);
, 看似是指標，但其實指標型態或正常型態的資料皆可輸入。
(3)strcpy或strupr如果引數是輸入字串，此函數會對整個字串造成影響
Ex:strupr(qaz)=QAZ

*/
