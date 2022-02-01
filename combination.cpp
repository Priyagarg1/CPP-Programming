#include<iostream>
using namespace std;
    int factorial(int num)
    {
        int i,fact=1;
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    int combination(int n,int r)
    {
        int num=factorial(n);
         int denom=factorial(r)*factorial(n-r);
        return num/denom;
    }
    int main()
    {
        int num,rum,res;
        cin>>num>>rum;
        res= combination(num,rum);   
        cout<<"combination is"<<res<<endl;
    return 0;
}
