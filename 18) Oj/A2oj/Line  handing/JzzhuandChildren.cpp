#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,m;
    cin>>n>>m; 
    vector<int>v;
    queue<int>q;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {

        int a;
        cin>>a;
        v.push_back(a);
        q.push(i);

    }
    int k;
    while(!q.empty())
    {

        k=q.front();
        if(v[k]>m)
        {
            v[k]=v[k]-m;
            q.pop();
            q.push(k);
        }
        else
            q.pop();

    }
    cout<<k<<endl;
    
}

