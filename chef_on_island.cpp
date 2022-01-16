// codechef problem
#include<iostream>
using namespace std;
int main()
{
    int x,y,xr,yr,d,T;
    int div1,div2,divv;
    cin>>T;
    while(T--)
    {
    cin>>x>>y>>xr>>yr>>d;
    div1=x/xr;
    div2=y/yr;
    if(div1>div2)
    {
        divv=div2;
    }
    else
    {
        divv=div1;
    }
    if(divv==d)
    {
        cout<<"yes"<<endl;
    }
    else if(divv>d)
    {
        cout<<"yes"<<endl;
    }
    else if(divv<d){
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    }
    return 0;
}
