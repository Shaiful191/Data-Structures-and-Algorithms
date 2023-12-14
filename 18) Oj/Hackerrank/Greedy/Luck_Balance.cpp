#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n,k;
    cin>>n>>k;
    vector<ll>l;
    vector<ll>m;
    ll c=0;
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        ll a,b;
        cin>>a>>b;
        ans+=a;
        if(b==1)
        {
            c++;
            m.push_back(a);
        }
        l.push_back(a);



    }
    sort(m.begin(),m.end());
     ll p;
    if(c<=k)
        cout<<ans<<endl;
    else
    {
        p=c-k;
        ll d=0;
        for(ll i=0; i<p; i++)
            d+=m[i];
        d=2*d;
        cout<<ans-d<<endl;
    }

}

