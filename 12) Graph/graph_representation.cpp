
/*
    An acyclic graph is a graph that has no cycle.
    A tree is an undirected graph in which any two vertices are connected by only one path.
    A tree is an acyclic graph and has N-1 edges where N is the number of vertices.
    Each node in a graph may have one or multiple parent nodes but in a tree each node exactly one parent node.
    A root node has no parent.
*/

#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<int>arr[100];
int main()
{
    freopen("graph.txt","r",stdin);
    cin>>n>>e;
    for(int i=1; i<=e; i++)
    {
        int a,b;
        cin>>a>>b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }


    for(int i=1;i<=n;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
