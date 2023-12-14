#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, p;
    cin >> b >> p;
    int ans = 1;
    long long mod =1e9;

    while (p)
    {
        if (p % 2 == 0)
        {
            b = (b * b)%mod;
            p = p / 2;
        }
        else
        {
            ans = (ans * b)%mod;
            p--;
        }
    }

    cout << ans << endl;
}