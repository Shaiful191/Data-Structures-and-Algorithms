#include<bits/stdc++.h>
using namespace std;
#define m 100
int n,e;
vector<int>graph[m];
int v[m];
int d[m];
int p[m];
void bfs(int s)
{
    v[s]=1;
    d[s]=0;
    p[s]=-1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
      int x=q.front();
      v[x]=1;
      cout<<x<<" ";
        q.pop();
      for(int i=0;i<graph[x].size();i++)
      {
          int k=graph[x][i];
          if(v[k]==0)
          {
              d[k]=d[x]+1;
              p[k]=x;
              q.push(k);

          }
      }
    }
}

int main()
{
    freopen("graph.txt","r",stdin);
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    int s;
    cin>>s;
    bfs(s);
}
