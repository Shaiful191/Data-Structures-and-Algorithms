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




}

