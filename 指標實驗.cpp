#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int *iptr1,*iptr2;//�ŧi���СA�ŧi��k: ���V���ܼ�����  *���ЦW��(�Y�n�ŧi�h�ӥγr�I�j�}); 
	int iN1,iN2;
	cout<<"�п�JiN1���ƭ�";
	cin>>iN1;
	cout<<"�п�JiN2���ƭ�";
	cin>>iN2;
	iptr1=NULL;//�N�����Ы��V(NULL)�N�O�����V����@�ӼơA�̭��|�X�{�H������}(�]���S�����w)  
	cout<<setw(15)<<"\t"<<setw(15)<<"iN1"<<setw(15)<<"iN2"<<setw(15)<<"iptr1"<<setw(15)<<"iptr2"<<endl;
	cout<<setw(15)<<"iptr1=NULL;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	//�L�X���G 
	iptr2=NULL;
	cout<<setw(15)<<"iptr2=NULL;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	iptr1=&iN1;//�N����iptr1���ȳ]���ܼ�iN1����}�A��l�ƫ���:���ЦW��=&���V���ܼơC 
	cout<<setw(15)<<"iptr1=&iN1;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	cout<<"\n�����q*iptr1(*iptr1���Ы��V����})="<<*iptr1<<"\t*iptr2(*iptr1���Ы��V����})="<<"���Щ|����l��"<<endl;
	iptr2=&iN2;//�N����iptr2���ȳ]���ܼ�iN2����}
	cout<<setw(15)<<"iptr2=&iN2;"<<setw(15)<<iN1<<setw(15)<<iN2<<setw(15)<<iptr1<<setw(15)<<iptr2<<endl;
	cout<<"\n�����q*iptr1(*iptr1���Ы��V����})="<<*iptr1<<"\t*iptr2(*iptr1���Ы��V����})="<<*iptr2<<endl;
	cout<<"�̧}���ȴ���*iptr1="<<*iptr1;
	/*   *iptr1�N��@�Ӧ�}�Piptr1���x�s����}�ۦP���ܼ�(���V���ܼ�)�Aiptr1�x�s����}�N�OiN1����}�A
		 �]�N�O���A*iptr1�N�OiN1�A�i�HŪ���Χ���iN1(���V���ܼ�)���� 
		 ���O�Y���Щ|����l��(���VNULL�Υ��]�w)���ӫ��Ъ��̧}(���Ф��s����})���ȥ\��|����(�o�Ϳ��~) 
	*/	
}
