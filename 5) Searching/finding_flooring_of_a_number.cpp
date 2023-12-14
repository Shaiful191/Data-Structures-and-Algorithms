#include<bits/stdc++.h>
using namespace std;

///flooring mane equal or biggest less then the value.
int Binary_search(int arr[],int c,int l,int r){

    if(l>r)
    return r;

     int mid=l+(r-l)/2;

    if(arr[mid]==c)
        return mid;
    else if(arr[mid]<c)
        return Binary_search(arr,c,mid+1,r);
    else                //(arr[mid]>c)
        return Binary_search(arr,c,l,mid-1);
}

int main()
{

    cout<<"Enter the array size and finding value:";
    int n,c;
    cin>>n>>c;
    int arr[n+1];
    cout<<"Enter the array value:"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    int ans=Binary_search(arr,c,0,n-1);
    cout<<"Ans is :"<<ans<<endl;


}



