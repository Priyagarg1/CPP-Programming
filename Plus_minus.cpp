#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,arr[100];
    float p_count=0,n_count=0,z_count=0,p_1;
    cin>>n;
    for(i=0;i<n;i++)
    {
            cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            p_count=p_count+1;
        }
        if(arr[i]<0)
        {
            n_count=n_count+1;
        }
        if(arr[i]==0)
        {
            z_count=z_count+1;
        }
    }
    cout<<p_count/n<<endl;
     cout<<n_count/n<<endl;
      cout<<z_count/n<<endl;
    return 0;
}

