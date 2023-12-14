#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll k=1; k<=t; k++)
    {

       cout<<"Case "<<k<<":"<<endl;
       ll ans=0;
       ll n;
       cin>>n;
       for(ll i=0;i<n;i++)
       {
           string s;
           cin>>s;
           if(s[0]=='d')
           {
               ll a;
               cin>>a;
               ans+=a;

           }
           else{
            cout<<ans<<endl;
           }
       }
    }

}


