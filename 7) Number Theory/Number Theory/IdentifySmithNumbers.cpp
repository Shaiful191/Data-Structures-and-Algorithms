#include<bits/stdc++.h>
using namespace std;

//digit sum of a number:
int digitSum(int n){
    int ans=0;
    while(n>0){
        ans+=n%10; 
        n=n/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int x=digitSum(n);

    //finding prime factor of the n.
    int y=0;
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                y+=digitSum(i);
                n/=i;
            }
        }
    }
    if(n>1)  //if n is still gatter then 1 It's means it is also a prime number.
    y+=digitSum(n); 



    if(x==y) cout<<1<<endl;
    else cout<<0<<endl;
    
}