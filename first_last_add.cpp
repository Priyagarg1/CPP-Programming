//code chef problem
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
	int count=0,c;
	int num,first,last,add;
	    cin>>num;
	    count=log10(num);
	    c=pow(10,count);
	     first=num/c;
	     last=num%10;
	     add=first+last;
	     cout<<add<<endl;
    }
return 0;
}
