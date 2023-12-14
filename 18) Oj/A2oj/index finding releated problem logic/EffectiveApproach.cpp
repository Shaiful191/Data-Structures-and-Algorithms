#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr1[100005];
int arr2[100005];
int main()
{
    int n;
    cin>>n;

    int j=n;
    for(int i=1;i<=n;i++){
       int a;
       cin>>a;
       arr1[a]=i;
       arr2[a]=j;
       j--;
    }

    ll v=0,p=0;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        v+=arr1[a];
        p+=arr2[a];
    }

    cout<<v<<" "<<p<<endl;

}

