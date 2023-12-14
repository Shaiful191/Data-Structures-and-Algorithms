#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    if(n==1) cout<<1<<endl;
    else if(n==3 ||n==2)
        cout<<"NO SOLUTION"<<endl;
    else if(n==4)
        cout<<"2 4 1 3"<<endl;
    else
    {
        for(ll i=n; i>0; i-=2)
        {
            v.push_back(i);
        }
        for(ll i=n-1; i>0; i-=2)
        {
            v.push_back(i);
        }
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
}
