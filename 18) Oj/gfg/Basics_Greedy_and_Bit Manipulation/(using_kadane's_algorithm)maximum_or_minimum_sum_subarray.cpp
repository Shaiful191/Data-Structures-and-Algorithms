#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        v.push_back(b);

    }
    int ans=INT_MIN,a=0;

    for(int i:v)
    {
        a+=i;//aikhane i=v[i];a=a+v[i];

        ans=max(ans,a);
        a=max(a,0);
    }
    /* Minimum sum subarray nicer moto kore ber kora jai;
       int ans=INT_MAX,a=0;

      for(int i:v)
    {
        a+=i;//aikhane i=v[i];a=a+v[i];

        ans=min(ans,a);
        a=min(a,0);
    }
    */
    cout<<ans;

    return 0;
    /*
     9
     -2 1 -3 4 -1 2 1 -5 4
     output:6

    */
}


