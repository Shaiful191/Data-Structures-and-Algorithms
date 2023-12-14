#include<bits/stdc++.h>
using namespace std;

int primeFact(int n)
{

    int psum=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {

            while(n%i==0)
            {
                n=n/i;
                int k=i;
                while(k)
                {
                    psum+=k%10;
                    k/=10;
                }


            }
        }

    }
    if(n>1)
    {
        while(n)
        {
            psum+=n%10;
            n/=10;
        }
    }
    return psum;

}


int main()
{
    int n;
    cin>>n;
    int sum=0;
    int factor=primeFact(n);

    while(n)
    {
        sum+=n%10;
        n/=10;
    }

    if(factor==sum) cout<<1<<endl;
    else cout<<0<<endl;



}
