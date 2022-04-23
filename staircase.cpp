#include <iostream>

using namespace std;

int main()
{
    
    int n,d,i,j;
    cin>>n;
    d=n-1;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(j>=d)
          {
              cout<<"#";
          }
          else
          {
              cout<<" ";
          }
      }
      d=d-1;
      cout<<endl;
  }
 
    return 0;
}
