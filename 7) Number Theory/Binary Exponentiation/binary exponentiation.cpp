/*
    Power ber kora: 2^20000
    jaita integer/long long a kora sombob na.
    compleixity:(log n)
    Logic:
    power jodi
    odd hoy : ans=ans*base;power=power-1;
    even hoy: base=base*base; power/=2;


*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int base,power;
    cin>>base>>power;
    int ans=1;
    while(power>0){

        if(power%2==1) {
            ans=ans*base;
            power-=1;
        }
        else{
            base=base*base;
            power=power/2;
        }

    }
    cout<<ans<<endl;

}
