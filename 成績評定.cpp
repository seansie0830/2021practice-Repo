#include<iostream>
#include<cmath>
using namespace std;
int dismantle(int,int*);
int main()
{
   int in,temp,dig,i;

   cin>>in;
   temp=in/10;
   dig=1;
   while(temp>=1){
        temp=temp/10;
        dig++;
   }
   cout<<dig<<endl;
   int digs[dig];
   dismantle(in,digs);
   for(i=dig;i>=2;i--)cout<<digs[i]<<"\t";
   cout<<digs[1]<<endl;
   for(i=1;i<=dig-1;i++)cout<<digs[i]<<"\t";
   cout<<digs[dig];


}
int dismantle(int input,int* output){
    int i;
    for(i=0;i<=4;i++){
       double dI=i;
       int divisor=pow(10,dI);
       *(output+i)=input%divisor;
       input=input-*(output+i);
    }
    for(i=1;i<=4;i++){
        double dI;
        dI=i;
        *(output+i)=*(output+i)/pow(10,dI-1);
    }

}
