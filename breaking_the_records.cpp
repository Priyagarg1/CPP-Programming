#include <iostream>
using namespace std;
int main()
{
    int n,i,rem,max,min,count_max=0,count_min=0;
    long a[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]>max)
         {
             max=a[i];
             count_max++;
         }
         else if(a[i]<min)
         {
             min=a[i];
             count_min++;
         }
    }
    cout<<count_max<<" "<<count_min<<endl;

    

    return 0;
}
