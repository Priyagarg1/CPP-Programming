//codechef problem
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;
int main()
{
    int T;
    cin>>T; 
    while(T--)
    {
      int num;
      cpp_int fact=1,i; 
      cin>>num; 
     for(i=1;i<=num;i++)
     {
          fact=fact*i; 
     }
      cout<<fact<<endl;
    }
    return 0;
}
