#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;

        ll p=a;
        ll s=b;

        for(int i=2;i<=n;i++){

            ll k;
            k=(p+s)%1000000007;
            p=s;
            s=k;

        }

        cout<<s<<endl;

    }
}