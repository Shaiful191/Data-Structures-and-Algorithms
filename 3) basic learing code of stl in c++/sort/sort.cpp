#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
  return a>b;
}


int main()
{
    int a[7];
    for(int i=0;i<7;i++)
    cin>>a[i];
    sort(a,a+3);//ai khane (+) diya joto number  divo tar thika 1 kom index pronjonto  sorting korvo;
    //ai kaj ta vector ar balay ai bave likhte hove sort(v.begin(),v.begin()+3);
    for(int i=0;i<7;i++)
    cout<<a[i];
    // akhon ami cai index 3 theke 5 projonto sort korte;
      sort(a+3,a+6);
     for(int i=0;i<7;i++)
    cout<<endl<<a[i];
    cout<<endl<<"sorting all value asending order:";
    int l=7;//size of vector;
    sort(a,a+l);

    for(int i=0;i<l;i++)
    cout<<a[i];
    // akhon ami jodi cai ja array ta ami desanding order a sort korvo tahole reverse korlai hobe.
    cout<<endl<<"sorting all value desending order:";
   /* reverse(a,a+l);
    for(int i=0;i<l;i++)
    cout<<a[i];
    */
    // ami caile bole dite pari je kon condition er bitite sort hove.
    sort(a,a+l,compare);//vector hole: sort(V.begin(), V.end(),compare);
    for(int i=0;i<l;i++)
    cout<<a[i];
}
/*
Suppose you have a vector V and you want to sort it entirely in increasing order.
Syntax:
sort(V.begin(), V.end());
*/
