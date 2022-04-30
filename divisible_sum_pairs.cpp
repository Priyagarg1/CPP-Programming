#include <iostream>

using namespace std;

int main()
{
    int n,k,i,j,arr[100],count=0,d;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            d=arr[i]+arr[j];
            if(d%k==0)
            {
                count++;
            }
        }
    }
    cout<<count;
    

    return 0;
}
