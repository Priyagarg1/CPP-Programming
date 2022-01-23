//codechef problem
#include <iostream>
using namespace std;

int main() {
	int T;
	int X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    if(X>=Y && X>=Z)
	    {
	        cout<<"PIZZA"<<endl;
	    }
	    else if(X>=Y)
	    {
	        cout<<"PIZZA"<<endl;
	    }
	    else if(X>=Z)
	    {
	        cout<<"Burger"<<endl;
	    }
	    else if(X<Y && X<Z)
	    {
	        cout<<"Nothing"<<endl;
	    }
	    else
	    {
	        cout<<"Nothing"<<endl;
	    }
	}
	return 0;
}
