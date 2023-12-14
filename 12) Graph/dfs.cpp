#include<bits/stdc++.h>
using namespace std;
vector<int>g[100];
int n,e;
bool visited[100];
//pair<int,int> dfs_time[100];
//int t=0;

void dfs(int u){
    visited[u]=1;
    cout<<u<<" ";
    //dfs_time[u].first = t++;
    for(int i:g[u]){
        if(visited[i]) continue;
        else dfs(i);
    }
   // dfs_time[u].second = t++;
}


int main()
{
    freopen("input.txt","r",stdin);
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int s;
    cin>>s;
    dfs(s);
}
