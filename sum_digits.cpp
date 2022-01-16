//codechef problem
#include <iostream>
using namespace std;

int main() {
	int T,num,i,rem,sum;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    {
	        int sum=0;
	    while(num!=0)
	    {
	       
	        rem=num%10;
	        sum=sum+rem;
	        num=num/10;
	    }
	    cout<<sum<<endl;
	}
	}
	return 0;
}
