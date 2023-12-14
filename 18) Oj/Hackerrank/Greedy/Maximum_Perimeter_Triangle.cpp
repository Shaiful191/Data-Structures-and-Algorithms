/*
   a*        ai triangle ta:
    *  *        ->degenerate triangle hove jodi: ab+bc=ac.
   b* * * *c    ->non-degenerate triangle hove jodi: ab+bc>ac.
*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,b,c;
    vector<ll>v;
    ll k=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll d;
        cin>>d;
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n-2;i++)
    {

        if(v[i]+v[i+1]>v[i+2])
        {
            k=1;
            a=v[i];
            b=v[i+1];
            c=v[i+2];
        }

    }
    if(k==0) cout<<"-1"<<endl;
    else cout<<a<<" "<<b<<" "<<c<<endl;
}
