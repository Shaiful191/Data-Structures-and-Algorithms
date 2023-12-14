#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n>>m;
    long int *pre=new long int[n+1](); /// jokhon arrayer size bisal deoya tahkbe tokhon dynamic array declare korte hove. ll pre[n+1]={0};ai babe korle hove na;

    while(m--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        pre[a]+=k;
        if(b+1<=n)
        pre[b+1]-=k;

    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+pre[i];
        if(pre[i]>ans) ans=pre[i];
    }

    cout<<ans<<endl;


}
