#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll q;
    cin>>q;

    for(ll u=1; u<=q; u++)
    {
        ll n,k;
        cin>>n>>k;
        vector<int>v;


        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }

        ll t=0;
        for(ll i=0; i<k; i++)
        {
            t+=v[i];
        }

        ll ans=t;
        for(ll i=k; i<n; i++)
        {
            t=t+v[i];
            t-=v[i-k];
            if(t<ans)
            {
                ans=t;
            }

        }
        cout<<"Case "<<u<<": "<<ans<<endl;
        v.clear();
    }

}
