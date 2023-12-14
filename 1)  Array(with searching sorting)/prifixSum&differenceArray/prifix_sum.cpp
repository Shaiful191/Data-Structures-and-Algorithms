#include<bits/stdc++.h>
using namespace std;
int main()
{

    cout<<"Enter the array size:"<<endl;
    int n;
    cin>>n;
    int arr[n+1];
    int pre[n+1];
    cout<<"Enter the array value:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    pre[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }

    int q,l,r;
    cout<<"Enter the number quires"<<endl;
    cin>>q;
    cout<<"Enter the start and end value that sum you want to know:"<<endl;
    while(q--)
    {
        cin>>l>>r;
        if(l==0)
            cout<<pre[r]<<endl;
        else
            cout<<pre[r]-pre[l-1]<<endl;
    }


    //Time complexity (q+n)




}
