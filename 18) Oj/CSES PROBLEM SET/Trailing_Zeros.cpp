#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll x=5;
    ll ans=0;
    while(x<=n)
    {
       ans+=(n/x);
       x*=5;
    }
    cout<<ans<<endl;
}
