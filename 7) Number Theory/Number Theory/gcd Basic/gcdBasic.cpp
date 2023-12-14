#include<bits/stdc++.h>
using namespace  std;

///Ai function c++ a build in korai ase sudu jaikhane fucntion ta call kora hove saikhane function er name er age (__)aita dite hove.

// int gcd(int a,int b){
//     if(b==0)
//     return a;
//     else 
//     return gcd(b,a%b);
// }


int main(){
  int n;
  cin>>n;
  int arr[n],i;
  for(i=0;i<n;i++){
      cin>>arr[i];
  }
  int ans=arr[0];
  for(i=1;i<n;i++){
      ans=__gcd(ans,arr[i]);

      if(ans==1) //break doyor karon hoilo gcd akber 1 asle aita r jotoi samne agai 1 e asbe tai ai khane break doya hoy.
      break;
  }
  cout<<ans<<endl;
  return 0;
}
