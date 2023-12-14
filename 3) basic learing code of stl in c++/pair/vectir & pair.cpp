#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int> >v;

    v.push_back(make_pair("ridoy",20));
    v.push_back(make_pair("shaiful",21));
    cout<<v[0].first<<endl;
    cout<<v[1].second<<endl;
    vector<pair<string,int> >:: iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first <<" " << it->second<<endl;
    }


}
