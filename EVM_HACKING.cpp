#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B,C,P,Q,R,dif,sum;
	    float avg;
	    cin>>A>>B>>C>>P>>Q>>R;
	    sum=P+Q+R;
	    avg=sum/2;
	    if(B+C+P> avg || A+C+Q > avg || B+A+R > avg)
	    {
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
