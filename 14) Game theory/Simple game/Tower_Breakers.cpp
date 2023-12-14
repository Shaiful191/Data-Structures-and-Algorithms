///hackerrank solution explanation:https://www.youtube.com/watch?v=J9Ys9QbSris

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        if(m==1)
            cout<<2<<endl;
        else if(n%2==0)
            cout<<2<<endl;
        else
            cout<<1<<endl;

    }

}
