#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
       int n,m;
       cin>>n>>m;
       int ans;
       ans=n/2;
       ans*=m;
       cout<<"Case "<<k<<": "<<ans<<endl;
    }

}

