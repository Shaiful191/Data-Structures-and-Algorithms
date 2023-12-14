/*

Time Complexity: O(N)
Space Complexity: O(max(Arr))
Counting sort is a very efficient algorithm but it can only be used when the constant
n is small enough, so that the array elements can be used as indices in the countArray
array.

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the array size:";
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MIN;

    cout<<"Enter the array value:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>mx) mx=arr[i];
    }

    //count: kon element koto bar ase.
    mx+=1;
    int countArray[mx]={0};
    for(int i=0;i<n;i++){

       countArray[arr[i]]++;
    }

    //find Prefix sum of countArray:
    for(int i=1;i<mx;i++){
        countArray[i]+=countArray[i-1];
    }

    int ans[n];
    for(int i=n-1;i>=0;i--){
        countArray[arr[i]]--; //decrement of countArray value.

        int k=countArray[arr[i]];

        ans[k]=arr[i]; // After that place the main arr value the decremented element index in our ans array.
    }

    cout<<"The sorting array is"<<endl;
    for(int i=0;i<n;i++)
    {
         cout<<ans[i]<<" ";
    }



}
