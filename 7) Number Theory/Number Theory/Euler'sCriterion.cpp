#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,m;
        cin>>a>>m;

        int sqr=sqrt(a);
        int ans=(int)(sqr);

        ans*=ans;
        ans%=m;
        if(ans==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }


}