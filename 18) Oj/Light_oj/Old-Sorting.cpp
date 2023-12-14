#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        //vector<int>v;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(i!=a) ans+=1;

        }
        if(ans==0) cout<<"Case "<<k<<": "<<ans<<endl;
        else cout<<"Case "<<k<<": "<<ans/2<<endl;
    }

}
