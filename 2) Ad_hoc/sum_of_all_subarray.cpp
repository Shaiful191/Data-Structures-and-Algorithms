///sub_array of [3,2,4,1] this array is:

/*
 (3),(3,2),(3,2,4),(3,2,4,1),(2),(2,4),(2,4,1),(4),(4,1),(1);
 summation of all sub_array is the ans;
 now,amra aita bruteforce use kore o korte pari abr caile 2 ta loop caliya abr nicer moto a o korte pari;
 //ami jodi aita ber korte pari je kon element ta koy bar asbe tar sub_array er mode tahole saigula diye ber kora jave;

 //konta koto bar ase ta ber koyar niyom hocce: i*(n-i+1); //i=index number

  index
 -------
  1        1*(4-1+1) = 4 ------------> 3*4=12
  2        2*(4-2+1) = 6 ------------> 2*6=12
  3        3*(4-3+1) = 6 ------------> 4*6=24
  4        4*(4-4+1) = 4 ------------> 1*4= 4
                    ------------------------------
                                      ans-> 52
 */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n+1];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        a=i*(n-i+1);
        cin>>arr[i];
        ans+=a*arr[i];
    }
    cout<<"the ans is: "<<ans<<endl;


}



