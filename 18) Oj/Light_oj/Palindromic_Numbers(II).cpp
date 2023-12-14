#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s,s1;
        cin>>s;
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s==s1) cout<<"Case "<<i<<": Yes"<<endl;
        else  cout<<"Case "<<i<<": No"<<endl;
    }

}
