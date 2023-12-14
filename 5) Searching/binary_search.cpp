#include<bits/stdc++.h>
using namespace std;


int Binary_search(int arr[],int f,int n)
{

    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if (arr[mid]>f)
        {
            e=mid-1;
        }

        else if(arr[mid]<f)
        {
            s=mid+1;
        }

        else               // (arr[mid]==f)
        {
            return mid;
        }

    }
    return -1;

}

int main()
{

    cout<<"Enter the array size and finding value:";
    int n,f;
    cin>>n>>f;
    int arr[n+1];
    cout<<"Enter the array value:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ans=Binary_search(arr,f,n);
    if(ans)
        cout<<"Founding index is :"<<ans<<endl;
    else
        cout<<"Not found!"<<endl;

}

 ///  int mid=(l+r)/2; l+r sum onk somoy int overflow hoye jate pare.tai amra nicer moto korvo.
    /*
        l+(r-l)
          ------
            2
          2l+r-l
      = -----------
             2
            l+r
      = ----------- (same).
             2
    */

///Kono akta problem a array er value gula jodi sorted akare day tar mane oikhane binary search er implementation thakte pare.

