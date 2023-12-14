#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n<2)
        return false ;


    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
             return false ;
        }


    }
     return true ;

}

int main()
{
    cout<<"Enter testing value:";
    int s;
    cin>>s;
    if(isprime(s)==0)
    {
        cout<<"not prime"<<endl;
    }
    else
        cout<<"prime"<<endl;

}
