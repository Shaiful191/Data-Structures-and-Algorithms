#include<bits/stdc++.h>
using namespace std;

/*
Sorting ascending order: Bydefault aita thake. sort function er mode.

bool compare(int a,int b){
    return a<b;
}
*/

// Sorting decending order: 

bool compare(int a,int b){

    // cout<<"Comparaing "<<a<<"and "<<b<<endl; //ai line diye ami caile dkhate pare je koro compare kora hoise oi built in sort function er mode.
    return a>b;
}


int main()
{
    cout<<"Enter the array size: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array value: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    //sort(arr,arr+n) // aita dile sudu ascending order a sort hove.

    //compare function aikhane call kora hoy nai.Ai khane compare function ta sort build fuction er paramiter hisebe deoya hoyese. 
    sort(arr,arr+n,compare);

    cout<<"After sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Tutorial link:https://www.youtube.com/watch?v=JiMcwYYZhtc