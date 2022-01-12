//Codechef Question1

#include <iostream>
using namespace std;

int main() {
    int money_withdraw;
    float account_bl;
    cin>>money_withdraw;
    cin>>account_bl;
    if(money_withdraw%5==0 && money_withdraw<=account_bl-0.5){
        cout<<((account_bl-money_withdraw)-(0.5));
    }
    else{
        cout<<account_bl;
    }
	return 0;
}
