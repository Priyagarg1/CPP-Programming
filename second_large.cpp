//codechef problem
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int T,a,b,c;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        if(a>b && a<c || a>c &&a<b)
        {
            cout<<a<<endl;
        }
        else if(b>a && b<c || b<a && b>c)
        {
            cout<<b<<endl;
        }
        else if(c>a &&c<b || c<a && c>b)
        {
            cout<<c<<endl;
        }
    }
	// your code goes here
	return 0;
}
