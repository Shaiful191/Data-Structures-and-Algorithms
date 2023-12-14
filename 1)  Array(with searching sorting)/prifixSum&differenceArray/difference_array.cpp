#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*difference array mane akta range deoya takhbe and akta value.
    oi range er protita valuer sathe oi value ta jog hobe;
    */

    cout<<"Enter the array size:"<<endl;
    int n;
    cin>>n;
    int arr[n+1];

    cout<<"Enter the array value:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

     int pre[n+1]={0};
     cout<<"Enter the quires:";
     int q;
     cin>>q;
     cout<<"Enter the range and value:"<<endl;
     while(q--)
     {
         int l,r,v;
         cin>>l>>r>>v;
         pre[l]+=v;
         pre[r+1]-=v;

     }


     for(int i=1;i<n;i++)
     {
         pre[i]=pre[i-1]+pre[i];
     }
     int ans[n+1];

     for(int i=0;i<n;i++)
     {
         ans[i]=pre[i]+arr[i];
     }

     cout<<"The ans is:\n";
     for(int i=0;i<n;i++)
     {
         cout<<ans[i]<<" ";
     }
}
