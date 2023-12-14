#include<bits/stdc++.h>
using namespace std;
#define m 100
int n,e;
vector<int>graph[m];

char color[m];

void dfsvist(int x)
{
    color[x]='g';
    cout<<x<<" ";
    for(int i=0;i<graph[x].size();i++)
    {
        int k=graph[x][i];
        if(color[k]=='w')
        {
            dfsvist(k);
        }
    }
    color[x]='b';

}

void dfs()
{
  for(int i=1;i<=n;i++)
  {
      color[i]='w';
  }
  for(int i=1;i<=n;i++)
  {
      if(color[i]=='w')
         {
            dfsvist(i);
         }
  }

}

int main()
{
    freopen("input.txt","r",stdin);
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    dfs();
}

