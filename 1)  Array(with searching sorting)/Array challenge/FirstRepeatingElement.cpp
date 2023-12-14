#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int N=10e6+2;
    int a[N];

    for(int i=0;i<N;i++){
       a[i]=-1;
    }

    int ans;
    for(int i=0;i<n;i++){

       if(a[arr[i]]>0) {
           a[arr[i]]++;
           ans=arr[i];
       }
       else a[arr[i]]++;  
        

    }

}