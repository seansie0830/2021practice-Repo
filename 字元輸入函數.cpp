/*今日的函數練習:getchar,getche,getch功能大同小異(在需不需要按下enter與有沒有顯示在螢幕上的差別)
  1.要按下enter的:
    1.getchar:從鍵盤中輸入一個字元，輸入後『需要』按下enter，回傳該字元的ASCll值，且該字元『會』被顯示在螢幕上。
  2.不用按enter的
    1.getche :從鍵盤中輸入一個字元，輸入後『不用』按下enter，回傳該字元的ASCll值，且該字元『會』被顯示在螢幕上。
    2.getch  :從鍵盤中輸入一個字元，輸入後『不用』按下enter，回傳該字元的ASCll值，且該字元『不會』顯示在螢幕上。
*/
#include<iostream> //包含getchar()的定義
#include<conio.h>  //包含 getche(),getch()的定義
#include<windows.h> //包括dos命令的標頭
using namespace std;
int main (){
    int key1,key2;
    cout<<"進行getchar()的測試"<<endl;
    key1=getchar();
    system("pause");
    cout<<key1<<endl;
    cout<<"進行getche的測試"<<endl;
    key1=getche();
    system("pause");
    cout<<key1<<endl;
    cout<<"進行getch的測試"<<endl;
    key1=getch();
    system("pause");
    cout<<key1<<endl;
    return 0;
}
//測試成功。
