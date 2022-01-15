Codechef problem
#include <iostream>
using namespace std;

int main() {
	int R;
	int C,O;
	int sub,mul,add;
	cin>>R; //Score made by team A
	cin>>O>>C; //Score made by team b is c in o overs 
	   sub=20-O;
	    mul=36*sub;
	    add=C+mul;
	    
	if(C<=R && O!=20)
	{ 
	   if(add>R)
	   {
	       cout<<"Yes";
	   }
	   else
	   {
	       cout<<"No";
	   }
	}
	else if(C>=R &&O!=20)
	{
	    cout<<"Yes";
	}
	else if(C==R &&O==20)
	{
	    cout<<"NO";
	}
	else {
	    cout<<"YES";
	}
	return 0;
}
