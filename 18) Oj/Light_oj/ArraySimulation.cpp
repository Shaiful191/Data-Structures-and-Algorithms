#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }

        for(int k=0; k<m; k++)
        {
            char c;
            cin>>c;
            if(c=='P')
            {
                int a,b;
                cin>>a>>b;
                swap(v[a],v[b]);
            }
            else if(c=='S')
            {
                int a;
                cin>>a;
                for(int i=0; i<n; i++)
                {
                    v[i]+=a;
                }
            }
            else if(c=='R')
            reverse(v.begin(),v.end());
            else if(c=='M')
            {
                int a;
                cin>>a;
                for(int i=0; i<n; i++)
                {
                    v[i]*=a;
                }
            }
            else
            {
                int a;
                cin>>a;
                for(int i=0; i<n; i++)
                {
                    v[i]/=a;
                }

            }
        }

        cout<<"Case "<<j<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
      v.clear();

    }
}
