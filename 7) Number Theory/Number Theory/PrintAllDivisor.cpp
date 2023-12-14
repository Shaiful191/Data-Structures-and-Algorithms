#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    set<int>s;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }

    }

    //cout<<"The total divisor is: "<<s.size()<<endl;
    // for(auto it:s){
    //     cout<<it<<" ";
    // }
    // s.clear();

   //aivabe caile amra akta set er value akta vector a assign korte pari.
    vector<int>v;
    v.assign(s.begin(),s.end());
    cout<<"The total divisor is: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }



}