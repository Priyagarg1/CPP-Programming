// Codechef problem
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
    int num,rem,rev=0;
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<rev<<endl;
    }
    return 0;
}
