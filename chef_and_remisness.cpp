//codechef problem
#include <iostream>
using namespace std;

int main() {
    int T,A,B,max,min;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        max=A+B;
        if(A>B)
        {
            min=A;
        }
        else
        {
            min=B;
        }
        cout<<min<<" "<<max<<endl;
    }
	// your code goes here
	return 0;
}
