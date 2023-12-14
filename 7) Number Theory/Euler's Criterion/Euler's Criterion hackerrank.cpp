/*
 Euler's Criterion:Let p be a prime.The number a is a quadratic
 residue modulo p if and only if a^p-1/2=1(after mod P).
 equation: x^2=a(mod p)
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

  ll t;
  cin>>t;
  while(t--){

   ll a,p;
   cin>>a>>p;

   ll m=p;
   if(a==0 || m==2) cout<<"YES"<<endl; //two special cases where Euler's criterion does not apply;
   else{
     p=(p-1)/2;
   ll ans=pow(a,p);
   ans%=m;

   if(ans==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   }

  }


}
