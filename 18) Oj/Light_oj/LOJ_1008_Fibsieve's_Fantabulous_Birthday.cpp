#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll  s;
        cin>>s;
        ll x, r;
        r=ceil(sqrt(s*1.0));
        /*
            Ceil: find the smallest possible integer value >= 15.08
            cout << ceil(15.08);---->16

            Floor: get the largest possible integer less than or equal to 68.95
            cout << floor(68.95);---->68
        */

        x=r*r-s;
        ll col,row;
        if(x<r){
            row=r;
            col=x+1;
        }
        else{
            col=r;
            row=s-(r-1)*(r-1);
        }
        if(r%2==0) swap(col,row);

        cout<<"Case "<<i<<": "<<col<<" "<<row<<endl;

    }
    return 0;
}



