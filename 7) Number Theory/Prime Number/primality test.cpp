#include<bits/stdc++.h>
using namespace std;

void prime(int n){

  int ans=1;
  if(n<2) ans=0;

  for(int i=2;i*i<=n;i++){
    if(n%i==0) ans=0;
  }

  if(ans==1) cout<<"It is a prime number."<<endl;
  else cout<<"It is not a prime number."<<endl;

}


int main(){
    int n;
    cin>>n;
    prime(n);

}
