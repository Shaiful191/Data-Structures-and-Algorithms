#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
vector<int>g[mx];
vector<int>path;
int dis[mx];
int par[mx];
vector<int>v;
void bfs(int s,int d)
{
    memset(dis,-1,sizeof dis);
    dis[s]=0;
    par[s]=-1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:g[u])
        {
            if(dis[v]==-1)
            {
                par[v]=u;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }

    int c=d;
    while(c!=-1)
    {
        path.push_back(c);
        c=par[c];

    }



}

int main()
{
    int t;
    cin>>t;
    while(t--)
   {

        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++) g[i].clear();
        path.clear();

        int x,y;

        for(int i=0;i<m;i++)
        {

            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);

        }
        bfs(1,n);
        int r=path.size()-1;
        v.push_back(r);

    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;


    }

}
