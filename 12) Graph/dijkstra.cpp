#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<int>arr[100];
vector<int>cost[100];
vector<int>g2[100];
int dis[100];
void dijk(int s1)
{
    fill(dis, dis+100, 1e9);
    dis[s1]=0;
    priority_queue<pair<int, int>>Q;
    Q.push(make_pair(-0, s1));
    while(!Q.empty())
    {
        int node=Q.top().second;
        Q.pop();
        for(int i=0; i<arr[node].size(); i++)
        {
            int c=cost[node][i];
            int v=arr[node][i];
            if(dis[v]>dis[node]+c)
            {
                dis[v]=dis[node]+c;
                g2[v].push_back(node);

                Q.push(make_pair(-dis[v],v));
            }
        }
    }


}






int main()
{
    freopen("graph.txt","r",stdin);
    cin>>n>>e;
    for(int i=1; i<=e; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        arr[a].push_back(b);
       arr[b].push_back(a);
        cost[a].push_back(c);
       cost[b].push_back(c);


    }
    int s1;
    cin>>s1;
    dijk(s1);


    for(int i=1; i<=n; i++)
    {
        if(dis[i]==1e9)
            cout<<"Distance of "<<i<<" from source: infinity\n";
        else
            cout<<"Distance of "<<i<<" from source: "<<dis[i]<<"\n";
    }



}


