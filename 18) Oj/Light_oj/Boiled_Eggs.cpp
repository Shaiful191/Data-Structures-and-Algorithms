#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        vector<int>v;


        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);

        }
        sort(v.begin(),v.end());
        int ans=0;
        int total=0;
        for(int i=0;i<n;i++)
        {
            if(total+v[i]<=q && ans+1<=p){
                    ans++;
                    total+=v[i];


            }
            else break;
        }

        cout<<"Case "<<k<<": "<<ans<<endl;



    }

}
