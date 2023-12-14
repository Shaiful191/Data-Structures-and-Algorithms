#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    ll x=0,y=0,ans;


        if(n%m==0){
            x=n/m;
            x*=b;
            y=n*a;
            ans=min(x,y);
        }

        else{
        double d=n/m;
           x=floor(d);
           int k=n-(x*m);
           x*=b;
           k*=a;
          int x1=k+x;
          int x2=x+b;
          x=min(x1,x2);

           y=n*a;
           ans=min(x,y);

        }

    cout<<ans<<endl;

}
