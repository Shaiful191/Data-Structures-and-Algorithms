#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    double pi = 2.0 * acos(0.0);


    for(ll i=1; i<=t; i++)
    {
      double r;
      cin>>r;
      double a=r+r;
      a=a*a;

      double s;
      s=r*r;
      s*=pi;
      double ans;

      ans=a-s;
      cout<<fixed;
      cout<<"Case "<<i<<": "<<setprecision(2)<<ans<<endl;

    }

}

