#include<iostream>
#include<windows.h>

int main()
{
	int jewel,play1,play2;
	jewel=17;
	int i;
	while(1){
		std::Sleep(1000);
		std::system("cls");
		std::cout<<"�E�_���_�ۼ�";
		for(i=0;i<=jewel;i++)
		{
			std::cout<<"o";
		}
		std::cout<<"\n";
		std::cout<<"���a1�_�ۼ�";
		for(i=0;i<=play1;i++)
		{
			std::cout<<"o";
		}
		std::cout<<"\n";
		std::cout<<"���a2�_�ۼ�";
		for(i=0;i<=play2;i++)
		{
			std::cout<<"o";
		}
	}
}
