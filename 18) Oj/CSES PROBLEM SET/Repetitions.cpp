#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string s;
    cin>>s;
    ll ans=0;
     ll a=0;
    for(int i=0;i<s.size();i++)
    {


        if(s[i]==s[i+1] && s[i+1]!=s[i+2])
        {
            a+=2;
            if(ans<a)
            ans=a;
            a=0;
        }
        else if (s[i]==s[i+1] && s[i+1]==s[i+2]) a+=1;

    }
    if(ans==0) cout<<1<<endl;
    else cout<<ans<<endl;
}
