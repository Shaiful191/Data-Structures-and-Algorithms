#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll ans=0;
    ll i=0,j=0;
    ll sum=0;
    ll c=0;
    while(j<n)
    {


        if(sum>t)
        {
            sum-=v[i];
            c--;
            if(sum<=t)
            ans=max(ans,c);
            i++;

        }

       else{
        sum+=v[j];
        c++;
        j++;
        if(sum<=t) ans=max(ans,c);
       }




    }




    cout<<ans<<endl;

}
