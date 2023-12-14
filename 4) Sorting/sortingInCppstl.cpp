/*
In practice, it is almost never a good idea to implement a home-made sorting algorithm,
because all modern programming languages have good sorting algorithms
in their standard libraries
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the array size:";
    int n;
    cin>>n;
    cout<<"\nEnter the array value:";
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<"sort in increasing order:";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<"\nsort in decreasing order:";
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";


    cout<<"\nSort an array:";
    int k=7;
    int arr[k]={4,2,5,3,5,8,3};
    sort(arr,arr+k);
    for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";

    cout<<"\nSort a String:";
    string s="monkey";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    




}
