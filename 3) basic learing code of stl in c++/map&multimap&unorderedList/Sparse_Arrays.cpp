#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    map<string,int>mp;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(mp.count(s))
        {
            mp[s]++;
        }
        else{
            mp.insert({s,1});
        }
    }

    int q;
    cin>>q;
    vector<int>v;
    for(int i=0;i<q;i++)
    {
        string s;
        cin>>s;
        if(mp.count(s))
        {
            v.push_back(mp[s]);
        }
        else v.push_back(0);

    }


    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}
