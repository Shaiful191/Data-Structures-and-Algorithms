#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d,e,f;

ll fn(ll n)
{
    if (n == 0)
        return a;
    else if(n == 1)
        return b;
    else if (n == 2)
        return c;
    else if  (n == 3)
        return d;
    else if  (n == 4)
        return e;
    else if  (n == 5)
        return f;

     ll ans=0;
        for(int i=6;i>=1;i--)
        {
            ans+=fn(n-i);
        }
    return ans;
}
int main()
{
    ll n, cases;
    scanf("%d", &cases);
    for (ll caseno = 1; caseno <= cases; ++caseno)
    {

        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}

