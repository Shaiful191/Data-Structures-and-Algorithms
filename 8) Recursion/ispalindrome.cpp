#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string p,int s,int e)
{
    int l=ceil(p.size()/2)+1;

    if(l==s)
        return true;

    if(p[s]==p[e])
    {
        return ispalindrome(p,s+1,e-1);
    }
    return false;

}
int main()
{
    string p;
    cin>>p;
    if(ispalindrome(p,0,p.size()-1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
