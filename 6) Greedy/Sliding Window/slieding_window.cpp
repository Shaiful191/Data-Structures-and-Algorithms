///Window Sliding Technique:O(n) time complexity.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }

    int msum=0,wsum; //msum=MaximumSum,wsum=WindowSum;
    for(int i=0;i<k;i++) msum+=v[i];

    wsum=msum;

    for(int e=k;e<n;e++)
    {
        wsum+=v[e]-v[e-k];
        if(wsum>msum) msum=wsum;

    }
    cout<<msum<<endl;

}
