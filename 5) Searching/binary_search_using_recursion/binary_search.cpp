#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[],int s,int l,int r){

    if(l>r)
    return -1;

   ///  int mid=(l+r)/2; l+r sum onk somoy int overflow hoye jate pare.tai amra nicer moto korvo.
    /*
               (r-l)
         l + ---------
                 2

          2l+r-l
      = -----------
             2
            l+r
      = ----------- (same).
             2
    */

    int mid=l+(r-l)/2;
    if(arr[mid]==s)
        return mid;
    else if(arr[mid]<s)
        return Binary_search(arr,s,mid+1,r);
    else                  //(arr[mid]>s)
        return Binary_search(arr,s,l,mid-1);

}


int main()
{

    cout<<"Enter the array size and finding value:";
    int n,s;
    cin>>n>>s;
    int arr[n+1];
    cout<<"Enter the array value:"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    int ans=Binary_search(arr,s,0,n-1);
    if(ans>=0) cout<<"Founding index is :"<<ans<<endl;
    else cout<<"Not found!"<<endl;

}

///Note: Kono akta problem a array er value gula jodi sorted akare day tar mane oikhane binary search er implementation ase.
