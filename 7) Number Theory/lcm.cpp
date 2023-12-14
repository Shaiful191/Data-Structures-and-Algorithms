#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int r=(a /__gcd(a, b)) * b;//using this formula : a*b=gcd(a,b) * lcm(a,b);
    cout<<"lcm of a and b is ="<<r<<endl;

}
