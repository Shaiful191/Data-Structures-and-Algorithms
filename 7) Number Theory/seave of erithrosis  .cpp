#include<bits/stdc++.h>
using namespace std;

int n,s;
int main()
{
   // int n,s;/aita main a declare korle error dakhay.karon jani na;
    cin>>n;
    int k=(double)n/2;
    s=k+1;
    bool status[s];// surute bool declare korle a[full]=0 ba false dore.
    int i, j;
    // have to check primes up to (sqrt(N))

    for( i = 3; i*i <= n; i += 2 )//i<=sqrt(n)=i*i <= n;(uboy pase borgo()2 kore,root katar jone)
    {

        if( status[i] == 0 )
        {

            // so, i is a prime, so, discard all the multiples

            // j = i * i, because it’s the first number to be colored

            for( j = i * i; j <= n; j += i + i )//ai khane j+=i+i korar karon amra jani namta te joto er nameta toto + hoy.kintu ami ai khane i 2 bar + korar karon holo ami jor gula hisab korbo na,j er sathe 1 bar i + korle jor sonkha asbe tai 2 bar i + korte hobe.

                status[j] = 1; // status of the multiple is 1

        }

    }

    // print the primes

    printf("2 ");

    for( i = 3; i <= n; i += 2 )
    {

        if( status[i] == 0 )

            printf("%d ", i);

    }

    return 0;

}
