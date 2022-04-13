#include <iostream>

using namespace std;

int main()
{
    int i,n,arr[100][100],j,dig_1=0,dig_2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                dig_1+=arr[i][j];
            }
            if((i+j)==n-1)
            {
                dig_2+=arr[i][j];
            }
       }
    }
     cout<<abs(dig_1-dig_2);
    return 0;
}
