#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll ans=INT_MAX,k;
    for(ll i=1;i<n;i++)
    {
        k=v[i]-v[i-1];
        if(k<0) k*=-1;
        if(k<ans)
        {
            ans=k;
        }
    }
    cout<<ans<<endl;



}
