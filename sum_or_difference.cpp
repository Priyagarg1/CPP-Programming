//codechef problem
#include <iostream>
using namespace std;

int main() {
    int A,B,diff,sum;
    cin>>A>>B;
    if(A>B)
    {
        diff=A-B;
        cout<<diff<<endl;
    }
    else
    {
        sum=A+B;
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
