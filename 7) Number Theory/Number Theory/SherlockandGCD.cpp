#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int ans=arr[0];
       for(int i=1;i<n;i++){
           ans=__gcd(ans,arr[i]);
           if(ans==1) break;
       }
       if(ans==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   } 
}

/*Note:
 whole array er gcd jodi 1 hoy taile yes
 otherwise No.
*/