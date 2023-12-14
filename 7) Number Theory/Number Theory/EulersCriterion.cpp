#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, m;
        cin >> a >> m;

        if (a == 0 || m == 2)
            cout << "YES" << endl;
        else{
            ll k= (pow(a,(m-1)/2));
            k%=m;
            if(k==1) cout << "YES" << endl;
            else cout<<"NO"<<endl;

        }
        
       
    }
}