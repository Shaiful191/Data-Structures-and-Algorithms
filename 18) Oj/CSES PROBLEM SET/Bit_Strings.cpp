#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll ans=1;
    ll m=1;
    for(ll i=0;i<9;i++)
    {
       m*=10;
    }
    m+=7;
    while(n--)
    {
        ans=ans*2%m;
    }

    cout<<ans<<endl;
}
