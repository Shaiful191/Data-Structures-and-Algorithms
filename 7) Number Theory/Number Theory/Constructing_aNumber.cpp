#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       ll sum=0;
       for(int i=0;i<n;i++){
           ll k;
           cin>>k;
           sum+=k;
       }
       if(sum%3==0) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
       

   }
}

/*
Note:
3       
4 5 9=4+5+9=18

if   18%3==0 ans=Yes;
else No;

*/