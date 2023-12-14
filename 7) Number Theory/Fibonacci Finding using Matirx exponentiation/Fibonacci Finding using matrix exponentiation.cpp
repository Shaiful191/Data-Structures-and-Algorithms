/*
        Fibonacci Finding Using Matrix Exponentiation
    ------------------------------------------------------

  *n joto tar theke 1 kom ber matrix exponentiation kore then ans matrix
  er sathe multiflication korlai hove.


*/


#include<bits/stdc++.h>
using  namespace  std;
#define mod 1000000007
#define ll long long
#define N 5
ll ans[N][N],T[N][N];


void matrixMulti(ll A[][N],ll B[][N],ll dimention)
{
    ll res[dimention+1][dimention+1];
    for(ll i=0;i<dimention;i++)
    {
        for(ll j=0;j<dimention;j++)
        {
            res[i][j]=0;
            for(ll k=0;k<dimention;k++)
            {
                ll x=(A[i][k]*B[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }

    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)A[i][j]=res[i][j];
    }
}


//Matirix Exponentiation like binary exponentiation.

void MatrixExponentiation(ll a,ll b,ll n)
{
    ans[0][0]=ans[1][1]=1;
    ans[0][1]=ans[1][0]=0; //Identity matrix:[  1 0  ]
                           //                   0 1


    base[0][0]=0;
    base[0][1]=base[1][0]=base[1][1]=1;  //base matrix [ 0  1 ]
                                         //              1  1
    n--;
    while(n)
    {
        if(n%2==1)
        {
           matrixMulti(ans,base,2);
            n--;
        }
        else
        {
            matrixMulti(base,base,2);
            n/=2;
        }
    }

    ll result=a*ans[0][1]+b*ans[1][1];
    cout<<result%mod<<endl;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        MatrixExponentiation(a,b,n);
    }
}
