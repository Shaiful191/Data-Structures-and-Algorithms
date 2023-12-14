///array ta sorted thake hove;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,terget;
    cin>>n>>terget;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }

    int i=0,j=n-1;
    while(i<j)
    {
        if(v[i]+v[j]<terget) i++;
        else if(v[i]+v[j]>terget) j--;
        else {
            cout<<i<<" "<<j<<endl;
            break;
        }
    }

}
