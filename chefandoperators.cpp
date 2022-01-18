//codechef problem
#include <iostream>
using namespace std;

int main() {
    int T,a,b;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
	// your code goes here
	return 0;
}
