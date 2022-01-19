#include <iostream>
using namespace std;

int main() {
    int T,a,b,sum,c;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum==180)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
