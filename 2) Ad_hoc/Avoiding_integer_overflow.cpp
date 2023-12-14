///check_if_a*b_is_greaterThan10^18_avoiding_integer_overflow
//aikhane amr kaj hove akta number 10^18 thake boro kina ta check kora.coto hole small print kora r 10^18 er boro hole big print kora;
//akhon ami aita gun kore korte gale 10^18 er boro gunfol asle error dakhabe karon ta interger overflow hoye jave;
//amra aita nicer moto kore korte pari;

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll p=10e18;
    cout<<"Enter 2 number: ";
     ll a,b;
     cin>>a>>b;
     ll c=p/a;
     if(b>c) cout<<"the number is big"<<endl;
     else cout<<"the number is small"<<endl;

}
