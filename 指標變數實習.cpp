//�Q�Ϋ��Ч�@�Ӱ}�C������������}���C�L�X��!
/*
�����ت�:
(1)�C�L�X�@�Ӱ}�C�Ҧ���������} 
(2)���ի��ЬO���O�b1�Ӷ��q���i�H���V���P���ܼ�(��l�ƨ⦸) 
*/ 
#include<iostream>
using namespace std;
int main()
{
	int array1[10]={12,15,45,63,2,51,42,12,69,57};
	int *ptr;
	int i;
	for(i=0;i<=9;i++)
	{
		ptr=&array1[i];//���N����ptr��l�ơA���V�}�C�s��i������ 
		cout<<"�}�C����array1["<<i<<"]="<<array1[i]<<"\t������}&array["<<i<<"]="<<&array1[i]<<"\t\n�̧}����(�ܼƩΤ���)*ptr(���Varray1["<<i<<"]="<<*ptr<<endl;
	}
	cout<<"\n----------------------------------------------------"<<endl;
	cout<<"�ثe�i�J�ĤG���q����";
	int test=10;
	int *testPt;
	cout<<"test="<<test<<endl;
	cout<<"testPt(�ثe�|�����w)"<<testPt<<endl;//�����w������ 
	testPt=&test;
	cout<<"testPt=&test"<<endl;
	cout<<"&test(���}���B��l)="<<&test<<endl;
	cout<<"testPt(Ū���b���Ф�����}=)"<< testPt<<endl;
	cout<<"*testPt(�̧}����(�ܼƩΤ���=)"<<*testPt<<endl;
	*testPt=30;
	cout<<"*testPt=30;"<<"����test���S���Q����  test="<<test; 
	cout<<test;

}
