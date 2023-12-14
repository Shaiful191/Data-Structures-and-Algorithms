#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(int p=1;p<=t;p++)
    {
       string a,b;
       cin>>a>>b;
       //11000000.10101000.00000000.11001000
       vector<ll>v;
       for(int i=0;i<4;i++) v.push_back(0);

       int k=0;
        int d=7;
       for(int i=0;i<b.size();i++)
       {

           if(b[i]=='.')
           {

               k++;
               d=7;

           }
           else{

            if(b[i]=='1')
            {

               v[k]+= pow(2,d);
            }
            d--;
           }
       }


       string ans;
       for(int i=0;i<4;i++)
       {
           ans+=to_string(v[i]);
           if(i!=3)
           ans+=".";
       }


       if(a==ans) cout<<"Case "<<p<<": Yes"<<endl;
       else cout<<"Case "<<p<<": No"<<endl;

    }

}

