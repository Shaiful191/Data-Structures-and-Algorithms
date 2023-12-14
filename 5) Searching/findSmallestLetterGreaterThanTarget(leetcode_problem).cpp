/*
[2 3 15 55 66]

terget=15 ; ans=55;
terget=10 ; ans=15;
terget=66 ; ans=2
terget=70 ; ans=2;//wrap around;
*/

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

        else
        {
            s=mid+1;
        }



    }
    return arr[s%n];

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


    /* upper_bound diye o kora jay:
     auto it= upper_bound(arr.begin(),arr.end(),c);
    if(it==arr.end()) cout<<"out of bound"<<endl;
    else
    cout<<"Ans is :"<<*it<<endl;
    */

