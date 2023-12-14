#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    int i=1;

    while(t--)
    {

        ll ans=0;
        ll n;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            if(a>0) ans+=a;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
        i++;
    }



}


