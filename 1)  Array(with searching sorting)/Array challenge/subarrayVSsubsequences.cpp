/*
array:  1 2 2
subarrays: [1] [1 2] [1 2 2] [2] [2 2] [2]
subsequences: {}, {1}, {2}, {2}, {1,2}, {1,2}, {2,2}, {1,2,2}.
Note: 
Number of subarrays of an array with n elements = nC2 + n = n*(n+1) / 2.
Number of subsequences of an array with n elements = 2n

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
   
    int sum=0;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=i;j<n;j++){
       
           k+=arr[j];
           cout<<k<<endl;
           sum+=k;

        }
        k=0;
    }
    

   cout<<"sum of all subarray: "<<sum<<endl;
   
}