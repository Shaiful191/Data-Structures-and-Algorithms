#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<int>graph[100];

void printgraph()
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
   // freopen("graph.txt","r",stdin);
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    printgraph();

    return 0;
}
