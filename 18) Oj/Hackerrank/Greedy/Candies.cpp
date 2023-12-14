#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll v[n+1],a[n+1],b[n+1],c[n+1];

    for(ll i=0;i<n;i++){
        cin>>v[i];
        a[i]=1;
        b[i]=1;
        c[i]=1;
    }

    for(ll i=0;i<n;i++)
    {
        if(v[i-1]<v[i]) b[i]=b[i-1]+1;

    }

    for(ll i=n-2;i>=0;i--)
    {
        if(v[i]>v[i+1]) c[i]=c[i+1]+1;

    }

    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+=max(b[i],c[i]);
    }
    cout<<ans<<endl;


}
