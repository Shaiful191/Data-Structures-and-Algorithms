#include<bits/stdc++.h>
using namespace std;
#define l 1005
int n,e,a[l],b[l],par[l],sz[l],m=0;
set<int>s;

int Find(int u)
{
    if(par[u]==u)
        return u;
    return par[u]=Find(par[u]);
}

void Union(int u,int v)
{
    int x,y;
    x=u;
    y=v;
    u=Find(u);
    v=Find(v);

    if(u==v)
    {

         a[m]=x;
         b[m]=y;
         m++;
    }

    if(u==v)
        return;

    if(sz[u]<sz[v])
        swap(u,v);
    sz[u]+=sz[v];
    par[v]=u;
}



int main()
{
    cin>>n;
    e=n-1;
    for(int i=0; i<l; i++)
    {
        par[i]=i;
        sz[i]=1;
    }

    for(int i=0; i<e; i++)
    {
        int u, v;
        cin>>u>>v;
        Union(u,v);
    }


    for(int i=1; i<=n; i++)
    {
        if(par[i]==i)
        {
           s.insert(i);

        }

    }
    vector<int>v;

    set<int>::iterator it;

        for(it=s.begin();it!=s.end();it++)
        {
            v.push_back(*it);

        }


    if(m==0)
        cout<<0<<endl;
    else
    {
        cout<<m<<endl;



        for(int i=0;i<m;i++)
        {
            Union(v[i],v[i+1]);
            cout<<a[i]<<" "<<b[i]<<" "<<v[i]<<" "<<v[i+1]<<endl;


        }
    }
}
