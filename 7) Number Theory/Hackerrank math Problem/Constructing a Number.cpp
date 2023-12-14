#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ans=0;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            ans+=a;

        }
        if(ans%3==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
