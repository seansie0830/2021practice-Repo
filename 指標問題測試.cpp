/*
���й���
(�@)����:�ܼ�:iN1,iN2 ����:ptr1,ptr2  �}�C:array
(�G)���示�e: 
(1)��}�O�_�i�H�]�w���ܼƩO(iN1=&iN2(��}))
���G:���� 
#include<iostream> 
using namespace std;
int main (){
	int *iptr;
	int iN1,iN2;
	int array[10];
	iN1=&iN2;
	//���~�N�X 	[Error] invalid conversion from 'int*' to 'int' [-fpermissive]

}
(2)���ը��}(ptr1=&iN1) 
���G:�i�H
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	ptr1=&iN1;
	
} 
(3)���Ш̧}����
���G:�i�H
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	iN1=20;
	cout<<"iN1="<<iN1;
	ptr1=&iN1;
	cout<<"*ptr1="<<*ptr1;
} 
(4)���Ш̧}���:

#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	iN1=20;
	cout<<"<out>iN1="<<iN1<<endl;
	ptr1=&iN1;
	cout<<"<cmd> *ptr1=100\n";
	*ptr1=100;
	cout<<"<out>iN1="<<iN1;
	cout<<"<cmd> *ptr1=200\n";
	*ptr1=200;
	cout<<"<out>iN1="<<iN1;
}
(5)�s���}�C(ptr1=&array[0]�򥻩�����)(�]�A�s���P����):
 #include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2;
	int array[10];
	array[0]=100;
	cout<<"<cmd>array[0]=100"<<endl;
	cout<<"<out> array[0]="<<array[0]<<endl;
	ptr1=&array[0];
	cout<<"<cmd>ptr1=&array[0];"<<endl;
	cout<<"<out>*ptr1=(����)"<<*ptr1<<endl;
	*ptr1=200;
	cout<<"<cmd>*ptr1=200(���)"<<endl;
	cout<<"<out>array[0]="<<array[0]<<endl;	
}
(6)��ܰ}�C��}
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	bool array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
���G:�C���U�@�Ӥ�����}�N�|�W�[ 1
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	short array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
���G:�C���U�@�Ӥ�����}�N�|�W�[ 2
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	long array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
���G:�C���U�@�Ӥ�����}�N�|�W�[ 4
#include<iostream>
using namespace std;
int main (){
	int *ptr1,ptr2;
	int iN1,iN2,i;
	double array[10];
	for(i=0;i<=10;i++){
		cout<<&array[i]<<endl;
	}
}
���G:�C���U�@�Ӥ�����}�N�|�W�[ 8
//����:�}�C�C���U�@�Ӥ����W�[���ƥط|�P�Ӹ�ƪ��j�p�ۦP
Ex:long���A���}�C���j�p���|�A
�h�Ӱ}�C�C���U�@�Ӹ�Ʀ�}�N�|�W�[�| 
(7)�S��}�C���}�k(��M) 
	A.ptr1=array[]  (X)  ->�P�U 
	B.ptr1=&array[0](x)  ->�L�k���� 
	C.ptr1=array    (O)  ->����array[0] 
	D.(��¦��)ptr1=&array[0] 
#include<iostream>
using namespace std;
int main (){
	int *ptr1,*ptr2;
	int iN1,iN2,i;
	int array[10];
	cout<<"<cmd>&array[0]=";
	cout<<&array[0]<<endl;
	cout<<"<cmd>ptr1=array\n";
	ptr1=array;
	cout<<"<out>ptr1="<<ptr1;

}
*/
#include<iostream>
using namespace std;
int main (){
	int *ptr1,*ptr2;
	int iN1,iN2,i;
	int array[10];
	cout<<"<cmd>&array[0]=";
	cout<<&array[0]<<endl;
	cout<<"<cmd>ptr1=array\n";
	ptr1=&array[];
	cout<<"<out>ptr1="<<ptr1;

}
