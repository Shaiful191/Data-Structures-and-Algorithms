#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
vector<int>graph2[100];
int par[100],k=0;
int visited[100];
int dis[100];
queue<int>q;
void bfs(int s)
{
    visited[s]=1;
    dis[s]=0;
    cout<<s<<" ";
    q.push(s);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(int i=0; i<graph[node].size(); i++)
        {
            int next=graph[node][i];
            if(visited[next]==0)
            {
                graph2[next].push_back(node);
                visited[next]=1;
                dis[next]=dis[node]+1;
                cout<<next<<" ";
                q.push(next);

            }
        }
    }
}
int main()
{
    int V,E;

    freopen("input.txt","r",stdin);
    cin>>V>>E;
    for(int i=1; i<=E; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
    }
    int s;
    cin>>s;
    bfs(s);
    for(int i=1; i<=V; i++)
    {
        cout<<"\n"<<"Distance of node from "<<i<<" is "<<dis[i];
    }
    cout<<"\n";
    for(int i=1; i<=V; i++)
    {
        if(s==i)
            continue;
        else if(dis[i]==0)
            cout<<"\n"<<i<<" is not  reachable from "<<s;
    }
    cout<<"\n";
    int l;
    cout<<"\nEnter the destination: ";
    cin>>l;
    int d=l;
    par[k++]=l;
    for(int j=0; j<graph2[l].size(); j++)
    {
        par[k++]=graph2[l][j];
        //cout<<graph2[l][j]<<" ";
        l=graph2[l][j];
        j=-1;
    }
    if(dis[d]==0)
        cout<<"No path exists";
    else
    {
        cout<<"\npath is: ";
        for(int i=k-1; i>=0; i--)
        {
            cout<<par[i]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}
