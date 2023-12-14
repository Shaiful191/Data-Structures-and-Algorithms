#include<bits/stdc++.h>
using namespace std;
#define LIM 100005

int par[LIM],sz[LIM];
set<int>s1;
int Find(int u)
{
    if(par[u]==u) return u;
    return par[u]=Find(par[u]);
}

void Union(int u,int v)
{
    u=Find(u);
    v=Find(v);
    if(u==v) return;
    if(sz[u]<sz[v]) swap(u,v);

    sz[u]+=sz[v];
     par[v]=u;
}

void result(int u)
{
     u=Find(u);
    s1.insert(sz[u]);
}
int main()
{
    set<int>s;
    set<int>::iterator it;
    int e;
    cin>>e;
    for(int i=0; i<LIM; i++)
        par[i] = i, sz[i] = 1;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
        s.insert(u);
        s.insert(v);
    }

    for(it=s.begin();it!=s.end();it++)
    {
        int u= *it;
        result(u);
    }

    cout<<*(s1.begin())<<" "<<*(s1.rbegin());
}
