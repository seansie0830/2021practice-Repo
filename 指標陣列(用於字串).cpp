#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char*testing[5]={"joanna","chongLun","chaoteacher","guaguawang","xiyuewang"};
	int i,j;
	for(i=0;i<=4;i++){
		for(j=0;j<=10;j++){
			cout<<"testing["<<i<<"]="<<testing[i]+j<<endl;
		}
		
	}
}
