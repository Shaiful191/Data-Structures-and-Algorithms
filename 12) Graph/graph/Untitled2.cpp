#include<bits/stdc++.h>
using namespace std;
vector<int> g1[100], cost[100];
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
        for(int i=0; i<g1[node].size(); i++)
        {
            int c=cost[node][i];
            int v=g1[node][i];
            if(dis[v]>dis[node]+c)
            {
                dis[v]=dis[node]+c;
                Q.push(make_pair(-dis[v],v));
            }
        }
    }
}


int main()
{

    int V1,E1,a1,b1,c1;
    freopen("inputt.txt","r",stdin);
    cin>>V1>>E1;
    for(int i=1; i<=E1; i++)
    {
        cin>>a1>>b1>>c1;
        g1[a1].push_back(b1);
        cost[a1].push_back(c1);
    }
    cout<<"\n";
    int s1;
    cin>>s1;
    dijk(s1);
    for(int i=1; i<=V1; i++)
    {
        if(dis[i]==1e9)
            cout<<"Distance of "<<i<<" from source: infinity\n";
        else
            cout<<"Distance of "<<i<<" from source: "<<dis[i]<<"\n";
    }

    return 0;
}

