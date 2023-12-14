/// kono akta set er subset hobe 2^oi set er element number,jamon {1,2,3} ai set er element number hobe:2^3=6;

/*
//subset:
{1,2,3}=(1),(2),(3),(1,2),(1,3),(2,3),(1,2,3),Q; [last er ta pai oi ta count kora bad dile upadan sokha hobe:((2^set er element number)-1)]

min=1,2,3,1,1,2,1=sort=1,1,1,1,2,2,3 ; here,1=4|2=2|3=1 ;-->Logic:2^3,2^2,2^1
max=1,2,3,2,3,3,3=sort=1,2,2,3,3,3,3 ; here,1=1|2=2|3=4 ;-->Logic:2^1,2^2,2^3


*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int p;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        p=pow(2,i);
        mx+=a*p;
        v.push_back(a);
    }

    int mn=0;
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        mn+=v[i]*pow(2,j);
        j++;
    }

    cout<<"Max value summation of all subset is: "<<mx<<endl;
    cout<<"Min value summation of all subset is: "<<mn<<endl;
    cout<<"The difference is : "<<mx-mn<<endl;





}
