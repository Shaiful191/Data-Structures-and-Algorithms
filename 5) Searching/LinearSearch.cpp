#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,s;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>s;
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==s) {
            k=1;
            cout<<"The searching index is: "<<i<<endl;
        }
    }
    if(k==0)  cout<<"The searching index is not found!"<<endl;
}