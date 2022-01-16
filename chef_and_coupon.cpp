//code chef problem
#include <iostream>
using namespace std;
int main() {
	int T,D,C,A1,A2,A3,B1,B2,B3,sum1,sum2,sum_C,sum_D;
	cin>>T;
	while(T--)
	{
	    cin>>D>>C;
	    cin>>A1>>A2>>A3;
	    cin>>B1>>B2>>B3;
	    sum1=A1+A2+A3;
	    sum2=B1+B2+B3;
	    if(sum1>=150 && sum2>=150)
	    {
	       sum_C=sum1+sum2+C;
	       sum_D=sum1+sum2+D+D;
	       if(sum_D>sum_C)
	       {
	           cout<<"yes"<<endl;
	       }
	       else
	       {
	           cout<<"no"<<endl;
	       }
	       
	    }
	    else if(sum1>=150 && sum2<=150)
	    {
	        sum_C=sum1+sum2+C+D;
	        sum_D=sum1+sum2+D+D;
	        if(sum_D>sum_C)
	        {
	            cout<<"yes"<<endl;
	        }
	        else
	        {
	            cout<<"no"<<endl;
	        }
	    }
	    else if(sum1<=150 && sum2>=150)
	    {
	        sum_C=sum1+sum2+C+D;
	        sum_D=sum1+sum2+D+D;
	        if(sum_D>sum_C)
	        {
	            cout<<"yes"<<endl;
	        }
	        else
	        {
	            cout<<"no"<<endl;
	        }
	    }
	    else if(sum1<=150 && sum2<=150)
	    {
	        sum_C=sum1+sum2+D+D;
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	       
	}
	return 0;
}
