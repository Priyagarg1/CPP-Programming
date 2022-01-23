//codechef problem
#include <iostream>
using namespace std;

int main() {
    int T,N,A,ans;
    cin>>T;
    while(T--)
    {
        cin>>N>>A;
        ans=N-A;
        if(ans>A)
        {
            cout<<A<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
	// your code goes here
	return 0;
}
