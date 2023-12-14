#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<int>graph[100];
char color[100];
int dis[100];
int p[100];
void bfs(int s)
{
    queue<int>q;

    for(int i=0; i<n; i++)
    {
        color[i]='w';
        dis[i]=-1;
        p[i]=-1;

    }
    dis[s]=0;
    p[s]=-1;
    q.push(s);

    while(!q.empty())
    {
        int x;
        x=q.front();
        cout<<x<<" ";
        color[x]='g';
        q.pop();
        for(int i=0; i<graph[x].size(); i++)
        {
                int k;
                k=graph[x][i];

                if(color[k]=='w')
                {
                    p[k]=x;
                    dis[k]=dis[x]+1;
                    q.push(k);

                }
        }

        color[x]='b';
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

    return 0;
}
