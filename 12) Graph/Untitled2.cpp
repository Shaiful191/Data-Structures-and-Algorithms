#include<bits/stdc++.h>
using namespace std;
vector<int>g[100];
bool visited[100];
void dfs(int s)
{
    visited[s]=1;
    cout<<s<<" ";
    for(int i:g[s])
    {
        if(visited[i]==1) continue;
        else dfs(i);
    }

}
int main()
{
    freopen("input.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
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
