#include <iostream>

using namespace std;

int main()
{
    int a[30],i,n,b[30],count_1=0,count_2=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            count_1=count_1+1;
            
        }
        else if(a[i]<b[i])
        {
            count_2=count_2+1;
        }
        else if(a[i]==b[i])
        {
            cout<<"";
        }
        else
        {
            cout<<"";
        }
    }
    cout<<count_1<<" "<<count_2;
    
    
    return 0;
}
