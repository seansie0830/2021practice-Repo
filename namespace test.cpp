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
		std::cout<<"»EÄ_¬ÖÄ_¥Û¼Æ";
		for(i=0;i<=jewel;i++)
		{
			std::cout<<"o";
		}
		std::cout<<"\n";
		std::cout<<"ª±®a1Ä_¥Û¼Æ";
		for(i=0;i<=play1;i++)
		{
			std::cout<<"o";
		}
		std::cout<<"\n";
		std::cout<<"ª±®a2Ä_¥Û¼Æ";
		for(i=0;i<=play2;i++)
		{
			std::cout<<"o";
		}
	}
}
