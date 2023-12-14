#include<bits/stdc++.h>
using namespace std;
#define l 100005
int sz[l],par[l];
int Find(int u)
{
    if(u==par[u]) return u;
    return par[u]=Find(par[u]);
}


void Union(int u,int v)
{
    u=Find(u);
    v=Find(v);
    if(u==v)
        return;
    if(sz[u]<sz[v] ) swap(u,v);
     sz[u]+=sz[v];
    par[v]=u;
}


int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++)
    {
        sz[i]=1;
        par[i]=i;
    }
    for(int i=0; i<q; i++)
    {
        char c;
        cin>>c;

        if(c=='Q')
        {
            int q;
            cin>>q;
            int t=Find(q);
            cout<<sz[t]<<endl;
        }
        else if(c=='M')
        {
            int u,v;
            cin>>u>>v;
           Union(u,v);
        }

    }
}
