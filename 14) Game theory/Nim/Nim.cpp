#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    int ans=0;

    for(int i=0;i<v.size();i++)
    {
        ans=ans^v[i];   // ^--->x-or sign
    }
    if(ans==0) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}
