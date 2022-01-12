//code chef question 3
#include<iostream>
using namespace std;
int main()
{
    int T,i,n,k,count=0;
    cin>>T>>k;
    for(i=1;i<=T;i++)
    {
    cin>>n;
    if(n%k==0)
    {
        count=count+1;
    }
    }
    cout<<count;
    return 0;
}
