#include<bits/stdc++.h>
using namespace std;

///ceiling mane equal or smallest gatter-then the value.

int Binary_search(vector<int>arr,int c,int l,int r){

    if(l>r)
    return l;

     int mid=l+(r-l)/2;

    if(arr[mid]==c)
        return mid;
    else if(arr[mid]<c)
        return Binary_search(arr,c,mid+1,r);
    else                       //(arr[mid]>c)
        return Binary_search(arr,c,l,mid-1);



}


int main()
{

    cout<<"Enter the array size and finding value:";
    int n,c;
    cin>>n>>c;
    vector<int>arr;
    cout<<"Enter the array value:"<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
       cin>>a;
       arr.push_back(a);
    }


    int ans=Binary_search(arr,c,0,n-1);
    cout<<"Ans is :"<<ans<<endl;


   ///ai problem ta lower bound diya o kora jay.
    /*
    auto it= lower_bound(arr.begin(),arr.end(),c);
    if(it==arr.end()) cout<<"out of bound"<<endl;
    else
    cout<<"Ans is :"<<*it<<endl;
    */


}


