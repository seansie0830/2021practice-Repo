/*
������:
(1)�ഫ���j�g�^�r��:strupr()
�쫬:char*strupr(char*string)
*/
#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char*player[5]={"StevenCurry","KobeBryant","LeBronJames","KevenDurant","JeremyLin"};
    //�ŧi���а}�C
    int i;
    char *pointer;
    int point[5]={12,63,59,87,45};
    char tempData[20],copyplayer[30];
    for(i=0;i<=4;i++){
        cout<<player[i]<<endl;
    }
    cout<<"-------------------------------------"<<endl;
    cout<<"�п�J�y���W��"<<endl;
    cin.getline(tempData,20);
    strupr(tempData);
    for(i=0;i<=4;i++){
        strcpy(copyplayer,player[i]);
        strupr(copyplayer);
        if(strcmp(tempData,copyplayer)==0){
            cout<<player[i]<<"�����Ƭ�"<<point[i]<<"��"<<endl;
            return 0;
        }
        else{
            continue;
        }
    }
    cout<<"�z�Ҭd�ߪ��y��"<<tempData<<"�S���b��Ʈw��!";
    return 0;


}
/*
�߱o:
(1)���u��J���r��ݭn�ഫ���j(�p)�g�A���n�ѤF�٦��y�����W�r�]�n�ഫ�C
(2)strcpy,strupr�����޼ơA���M�����쫬�O char * (char *  char * Source);
, �ݦ��O���СA�������Ы��A�Υ��`���A����Ƭҥi��J�C
(3)strcpy��strupr�p�G�޼ƬO��J�r��A����Ʒ|���Ӧr��y���v�T
Ex:strupr(qaz)=QAZ

*/
