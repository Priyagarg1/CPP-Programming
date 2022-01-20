#include <iostream>
using namespace std;
int main() {
    long int rem,i,temp, N,T,K;
    cin>>T;
    while(T--)
    {
        cin>>N;
        K=0;
        temp=N;
        while(temp!=0)
        {
            rem=temp%10;
            K=K+rem;
            temp=temp/10;
        }
        {
        if(N % K == 0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
    }
	// your code goes here
	return 0;
}


