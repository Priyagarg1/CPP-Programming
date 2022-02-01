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
    int permutation(int n,int r)
    {
        int num=factorial(n);
         int denom=factorial(n-r);
        return num/denom;
    }
    int main()
    {
        int res,num,rum;
        cin>>num>>rum;
        res= permutation(num,rum);   
        cout<<"permutation is"<<res<<endl;
    return 0;
}
