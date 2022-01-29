#include <iostream>
using namespace std;

int main() {
    int T;
    long int a,b,c;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        if(a==b+c)
        {
            cout<<"yes"<<endl;
        }
        else if(b==a+c)
        {
            cout<<"yes"<<endl;
        }
        else if(c==a+b)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
	// your code goes here
	return 0;
}
