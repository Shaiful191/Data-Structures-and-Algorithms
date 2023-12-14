#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll m,n;
       cin>>m>>n;
       vector<ll>v;
       v.push_back(0);
       for(ll i=0;i<n;i++)
       {
           ll a;
           cin>>a;
           v.push_back(a);
       }

       map<ll,ll>mp;

       for(ll i=1;i<=n;i++)
       {
            ll y;
            y=m-v[i];
            if(mp.count(y))
            {
                cout<<mp[y]<<" "<<i<<endl;
            }

            else{
                mp.insert({v[i],i});
            }

       }

   }

}
