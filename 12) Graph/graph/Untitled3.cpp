#include<bits/stdc++.h>
using namespace std;
vector<int>g[100];
vector<int>top;
int vis[100],t=1,c=-1,d=0,adj,m=0;
int edg[100][100];
pair<int, int>T[100];
void dfs(int s)
{
    vis[s]=1;
    cout<<s<<" ";
    T[s].first=t++;
    for(int i=0; i<g[s].size(); i++)
    {
        adj=g[s][i];

        if(vis[adj]==0)
        {
            edg[s][adj]=1;

            dfs(adj);
        }
        else if(vis[adj]==1)
        {
            if(T[adj].second==0){
                edg[s][adj]=2;
                m++;
            }
            else
                edg[s][adj]=3;
        }
    }
    top.push_back(s);
    T[s].second=t++;

}
int main()
{
    int V,E,a,b;
    FILE *f;
    f=fopen("graph.txt","r");
    fscanf(f,"%d %d",&V,&E);
    for(int i=1; i<=E; i++)
    {
        fscanf(f,"%d %d",&a,&b);
        g[a].push_back(b);
    }
    cout<<"Traverse node:\n";
    for(int i=1; i<=V; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            c++;
        }
    }

    cout<<"\n";
    for(int i=1; i<=V; i++)
    {
        cout<<"Node "<<i<<": "<<T[i].first<<" " <<T[i].second<<"\n";
    }
    if(c==0)
        cout<<"\nGraph is connected\n";
    else
        cout<<"\nGraph is not connected\n";
    cout<<"\n";

   for(int i=1; i<=V; i++)
    {
        for(int j=1; j<=V; j++)
        {
            if(edg[i][j]==1)
            {
                cout<<i<<"->"<<j<<": Tree Edge"<<"\n";
            }
            else if(edg[i][j]==2)
            {
                cout<<i<<"->"<<j<<": Back Edge"<<"\n";
               // m++;
            }
            else if(edg[i][j]==3)
            {
                if(T[i].first<T[j].first)
                    cout<<i<<"->"<<j<<": Forward Edge"<<"\n";
                else
                    cout<<i<<"->"<<j<<": Cross Edge"<<"\n";
            }
        }
    }
    reverse(top.begin(), top.end());
    vector<int>::iterator it;
    cout<<"\n";
   if(m)
        cout<<"This graph is not DAG\n";
    else{
        cout<<"This graph is DAG\n\nTopological short is:\n\n";
        for(it=top.begin();it<top.end();it++)
            cout<<*it<<" ";
        cout<<"\n";
    }
    return 0;
}
