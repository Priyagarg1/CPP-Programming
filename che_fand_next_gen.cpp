#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B,X,Y,m1,m2;
	    cin>>A>>B>>X>>Y;
	    m1=A*B;
	    m2=X*Y;
	    if(m2>m1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(m2==m1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
