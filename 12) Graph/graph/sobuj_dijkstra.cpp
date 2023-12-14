#include<bits/stdc++.h>
using namespace std;
vector<int> g1[100];
vector<int>cost[100];
int dis[100];
vector<int>g2[100];
int par[100],t1=0,t2=1;

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
                g2[v].push_back(node);

                Q.push(make_pair(-dis[v],v));
            }
        }
    }
}


int main()
{

    cout<<"\nEnter the Source: ";
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

    cout<<"\n";

    for(int i=1; i<=V1; i++)
    {
        int d=i;
        par[t1++]=i;

        for(int j=g2[d].size(); j=g2[d].size(); j--)
        {
            par[t1++]=g2[d][j-1];
            d=g2[d][j-1];

        }

        cout<<"For node "<<i<<" shortest path from source :";

        for(int l=t1-1; l>=0; l--)
        {
            cout<<par[l]<<" ";
        }
        cout<<"\n";
        t1=0;
        fill(par,par+V1,0);
    }

    return 0;
}
