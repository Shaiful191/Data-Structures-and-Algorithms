#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=1; i<=n; i++)
    {
      ll a,b,c;
      cin>>a>>b>>c;
      v.push_back(a);
      v.push_back(b);
      v.push_back(c);
      sort(v.begin(),v.end());
      ll p;
      p=(v[0]*v[0])+(v[1]*v[1]);
      ll k;
      k=v[2]*v[2];
      if(p==k){
        cout<<"Case "<<i<<": "<<"yes"<<endl;
      }
      else{
        cout<<"Case "<<i<<": "<<"no"<<endl;
      }
      v.clear();


    }
}
