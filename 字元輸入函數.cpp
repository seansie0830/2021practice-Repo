/*���骺��ƽm��:getchar,getche,getch�\��j�P�p��(�b�ݤ��ݭn���Uenter�P���S����ܦb�ù��W���t�O)
  1.�n���Uenter��:
    1.getchar:�q��L����J�@�Ӧr���A��J��y�ݭn�z���Uenter�A�^�ǸӦr����ASCll�ȡA�B�Ӧr���y�|�z�Q��ܦb�ù��W�C
  2.���Ϋ�enter��
    1.getche :�q��L����J�@�Ӧr���A��J��y���Ρz���Uenter�A�^�ǸӦr����ASCll�ȡA�B�Ӧr���y�|�z�Q��ܦb�ù��W�C
    2.getch  :�q��L����J�@�Ӧr���A��J��y���Ρz���Uenter�A�^�ǸӦr����ASCll�ȡA�B�Ӧr���y���|�z��ܦb�ù��W�C
*/
#include<iostream> //�]�tgetchar()���w�q
#include<conio.h>  //�]�t getche(),getch()���w�q
#include<windows.h> //�]�Ados�R�O�����Y
using namespace std;
int main (){
    int key1,key2;
    cout<<"�i��getchar()������"<<endl;
    key1=getchar();
    system("pause");
    cout<<key1<<endl;
    cout<<"�i��getche������"<<endl;
    key1=getche();
    system("pause");
    cout<<key1<<endl;
    cout<<"�i��getch������"<<endl;
    key1=getch();
    system("pause");
    cout<<key1<<endl;
    return 0;
}
//���զ��\�C
