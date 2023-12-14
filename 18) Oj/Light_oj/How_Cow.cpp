#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll n;
        cin>>n;
        vector<ll>v;

        for(ll j=0;j<n;j++)
        {
            ll x,y;
            cin>>x>>y;
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2) v.push_back(1);
            else v.push_back(0);

        }

        cout<<"Case "<<i<<":"<<endl;
        for(int k=0;k<n;k++)
        {
            if(v[k]==1)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

        v.clear();


    }
}
