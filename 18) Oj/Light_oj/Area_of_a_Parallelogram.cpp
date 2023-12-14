#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int Ax, Ay, Bx, By, Cx, Cy ;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy ;
        int Dx,Dy;
        Dx= Ax + Cx - Bx;
        Dy= Ay + Cy - By;
        ll area=0.5*(((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax)));
        cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<abs(area)<<endl;
    }

}
