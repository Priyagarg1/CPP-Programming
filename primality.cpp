#include <iostream>
using namespace std;

int main() {
     int T;
     cin>>T;
     while(T--)
     {
         long int NUM,i;
         int flag=0;
         cin>>NUM;
         if(NUM==1)
         {
             cout<<"no"<<endl;
             continue;
         }
         for(i=2;i<NUM;i++)
         {
         if(NUM%i==0)
         {
             flag=1;
             break;
         }
         }
         if(flag==0)
         {
             cout<<"yes"<<endl;
         }
         else
         {
             cout<<"no"<<endl;
         }
     }
	return 0;
}
