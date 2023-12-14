#include<bits/stdc++.h>
using namespace std;
int f,n,s;
int main()
{
    cin>>f>>n;
    int k=(double)n/2;
    s=k+1;
    bool status[s];
    int i,j;//ai i j loop er bitore declare korle o error dakhay.
    if(f==1||f==2)
    cout<<"2 ";
    if(f%2==0)
        f=f+1;
    if(f==1)
        f=f+2;
    for( i=f;i*i<=n;i+=2)
    {
        if(status[i]==0)
        {
            for( j=i*i;j<=n;j+=i+i)
            {
                status[j]=1;
            }
        }

    }


    for( i=f;i<=n;i+=2)
    {
        if(status[i]==0)
          cout<<i<<" ";
    }

}
