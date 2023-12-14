///using right shift:

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin>>n;
        ll ans=0;
        while(n!=0)
        {
            if((n&1)!=0) ans++;
            n=n>>1; //right shift.
        }
        if(ans%2==0)  cout<<"Case "<<i<<": even\n";

        else  cout<<"Case "<<i<<": odd\n";



    }
}

/*
///using c++ built in function:

    #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin>>n;
        if((__builtin_popcount(n) & 1))
        cout<<"Case "<<i<<": odd\n";

        else
         cout<<"Case "<<i<<": even\n";
    }
}

*/

///aita ber korar r akta niom ase oita advance ami pari na oitar nam:Brian Kernighan's Algorithm.
