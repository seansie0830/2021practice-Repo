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
