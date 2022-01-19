//codechef problem
#include <iostream>
using namespace std;

int main() {
    int N,i,a,eve_count,od_count;
    cin>>N;
    while(N--)
    {
        eve_count=0;
        od_count=0;

            cin>>a;
        if(a%2==0)
        {
            eve_count++;
        }
        else
        {
            od_count++;
        }
    }
        if(eve_count>od_count)
        {
            cout<<"READY FOR BATTLE"<<endl;
        }
        else
        {
            cout<<"NOT READY"<<endl;
        }
    
	// your code goes here
	
	return 0;
}
