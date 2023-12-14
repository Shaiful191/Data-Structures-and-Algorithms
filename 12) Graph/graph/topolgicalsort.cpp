#include<bits/stdc++.h>
using namespace std;
int n,e;
int arr[100][100];
char color[100];

int t=1;
int stime[100];
int fftime[100];

stack<int>ans;

void dfsvist(int x)
{
    color[x]='g';
    cout<<x<<" ";

    stime[x]=t;
    t++;


    for(int i=1;i<=n;i++)
    {
        if(arr[x][i]==1)
        {
            if(color[i]=='w')
            {
                dfsvist(i);
            }
        }
    }
    color[x]='b';

    fftime[x]=t;
    ans.push(x);
    t++;
}

void dfs()
{
    for(int i=1;i<=n;i++)
    {
        color[i]='w';
    }
    for(int i=1;i<=n;i++)
    {
        if(color[i]=='w')
        {
            dfsvist(i);
        }
    }
}

int main()
{
    freopen("graph.txt","r",stdin);
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
    }

    dfs();

    cout<<"\n Staring time & finishing time:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<" node "<<i<<" : "<<stime[i]<<" "<<fftime[i]<<endl;
    }
    cout<<"\n The topological sort is:"<<endl;
    while(!ans.empty()){
        cout<<ans.top()<< " ";
        ans.pop();
    }
}

