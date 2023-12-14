#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<char>v;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' &&  s[i]!='u' && s[i]!='i' ){
            v.push_back('.');
            v.push_back(s[i]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }


}
