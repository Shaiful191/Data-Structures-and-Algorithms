#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{

    ll n,p;
    ll ans=0;
    cin>>n>>p;

    for(ll i=1; i<n; i++)
    {
        ll a;
        cin>>a;

        if(p>a) ans+=p-a;
        else p=a;
    }
    cout<<ans<<endl;

}
