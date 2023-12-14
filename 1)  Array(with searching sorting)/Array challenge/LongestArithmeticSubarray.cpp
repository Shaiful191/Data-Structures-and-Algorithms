#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int ans=2;
    int d=a[1]-a[0];
    
    int current=2;
    int j=2;
    while(j<n){
        if(a[j]-a[j-1]==d){
            current++;
        } 
        else{
            d=a[j]-a[j-1];
            current=2;
        }
        ans=max(ans,current);
        j++;
    }
    cout<<ans<<endl;
    return 0;

}