#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    ll s=0;

    for(ll i=1;i<=n;i++)
    {
        s+=i;
        v.push_back(i);

    }
    ll k=(n*(n+1))/4; //formula

    ll ans=0;
    ll a=n,b=1;
    vector<ll>v1;
    vector<ll>v2;

    if(s-k==k)
    {
        cout<<"YES"<<endl;
        ll i=2;
        while(ans!=k){
            if(i%2==0){
               ans+=a;
            v1.push_back(a);
            v[a-1]=0;
               a--;


            }
            else{
                ans+=b;
            v1.push_back(b);
            v[b-1]=0;
                b++;
            }

          i++;

        }

        cout<<v1.size()<<endl;
        for(ll i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl<<v.size()-v1.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]==0) continue;
            else cout<<v[i]<<" ";
        }

    }

    else{
        cout<<"NO"<<endl;
    }
}
