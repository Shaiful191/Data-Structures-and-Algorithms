#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        if(n==2)
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        // 4 2 1 2
        //   x  y
        // 1 2  2 4
        // 2  4  1  2

        else{

        ll  diff=INT_MAX;
        ll x,y;

        for(int i=0;i<v.size()-1;i++){
              
            if(v[i+1]-v[i] < diff){
                diff=v[i+1]-v[i];
                x=i;
                y=i+1;

            }
        }

       
        for(int i=y;i<n;i++){
            cout<<v[i]<<" ";

        }
        for(int i=0;i<=x;i++){
             cout<<v[i]<<" ";
        }
        }
        cout<<endl;

        
        

    
    }

}