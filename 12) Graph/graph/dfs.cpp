#include<bits/stdc++.h>
using namespace std;

int graph[100][100],n,e;
char color[100];





void dfsvist(int x)
{
    color[x]='g';
    cout<<x<<" ";
    for(int i=1;i<=n;i++)
    {
        if(graph[x][i]==1)
        {
            if(color[i]=='w')
            {
                dfsvist(i);
            }
        }
    }
    color[x]='b';
}



void dfs()
{

    for(int i=1; i<=n; i++)
    {
        color[i]='w';
    }

    for(int i=1; i<=n; i++)
    {
        if(color[i]=='w')
        {
            dfsvist(i);
        }
    }

}







int main()
{
   freopen("intput.txt","r",stdin);
    cin>>n>>e;
    for(int i=1; i<=e; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a][b]=1;
    }
    dfs();

}
