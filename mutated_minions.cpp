//codechef problem
#include <iostream>
using namespace std;

int main() {
    int T,N,K,i,count,a;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        count=0;
        for(i=1;i<=N;i++)
        {
            cin>>a;
        if((a+K)%7==0)
        {
            count++;
        }
        }
        cout<<count<<endl;
}
}
