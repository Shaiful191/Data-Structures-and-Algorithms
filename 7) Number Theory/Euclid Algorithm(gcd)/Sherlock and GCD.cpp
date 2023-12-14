#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){

  if(b==0) return a;
  else return gcd(b,a%b);

}

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=gcd(ans,arr[i]);
    }
    if(ans==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }


}
