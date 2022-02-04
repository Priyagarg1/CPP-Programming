#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int N,f;
        double s;
        cin>>N;
        s=(0.143*N);
        f=round(pow(s,N));
        cout<<f<<endl;
    }
	return 0;
}
