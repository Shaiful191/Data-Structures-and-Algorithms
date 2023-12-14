#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define fon(s,e)     for(ll i=s; i<e; i++)
#define pb              push_back
#define full(a)         a.begin(),a.end()

int main()
{
    ll t;
    cin >> t;
    while(t--){
         ll n;
         cin>>n;
         ll k=0;
         string s;
         cin>>s;
         sort(full(s));
         fon(1,n)
         {
             string c;
             cin>>c;
             sort(full(c));
             fon(0,c.size()){
               if(s[i]>c[i])
               {
                   k=1;
                   break;
               }

             }
            s=c;

         }
         if(k==0) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }

    return 0;
}
