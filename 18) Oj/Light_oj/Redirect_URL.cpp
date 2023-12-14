#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        string s;
        cin>>s;
        if(s[4]=='s') cout<<"Case "<<i<<": "<<s<<endl;

        else{
            string k;
            int l=s.size()+1;
            for(int j=0;j<l;j++)
            {
                if(j<4) k+=s[j];
                else if(j==4) k+='s';
                else{
                    k+=s[j-1];
                }
            }
            cout<<"Case "<<i<<": "<<k<<endl;
        }
    }
}
