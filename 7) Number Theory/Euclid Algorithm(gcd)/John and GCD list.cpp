#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];

    cout<<arr[1]<<" ";
    for(int i=1;i<n;i++){
        cout<<(arr[i]*arr[i+1])/(__gcd(arr[i],arr[i+1]))<<" ";
    }
    cout<<endl;


  }

}
