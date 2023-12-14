#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll y,x;
        cin>>x>>y;
        ll c;
        ll p;
        if(x>y) c=x,p=1;
        else c=y,p=0;
        ll ans;
        ll r=(c*c)-(c-1);
        if(c%2!=0)
        {

            if(p==1)
          r-=c-min(x,y);
          else
          r+=c-min(x,y);



        }
        else if(c%2==0)
        {
           if(p==0)
          r-=c-min(x,y);
          else
          r+=c-min(x,y);

        }


       cout<<r<<endl;
       r=0;

    }
}
