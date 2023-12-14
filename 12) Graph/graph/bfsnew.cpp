#include<bits/stdc++.h>
using namespace std;
 int n,e;
int arr[100][100];
char color[100];
int parent[100];
int dis[100];
const int infinity = 1000000000;
void bfs(int s,int n)
{
    for(int i=1;i<=n;i++)
    {
        color[i]='W';
        parent[i]=-1;
        dis[i]=infinity;
    }


    parent[s]=-1;
    dis[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int x;
       x=q.front();
       q.pop();
       color[x]='G';
       cout<<x<<" ";
       for(int i=1;i<=n;i++)
       {
           if(arr[x][i]==1)
           {
               if(color[i]=='W')
               {
                   dis[i]=dis[x]+1;
                   parent[i]=x;

                   q.push(i);
               }
           }
       }
       color[x]='B';

    }


}

int main()
{
    // input graph from file;
   freopen("graph.txt","r",stdin);

    cin>>n>>e;
    int a,b;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;// if graph is undirected;
    }
   // cout<<"Enter the source node:";
    int s;
    cin>>s;
    bfs(s,n);
}
