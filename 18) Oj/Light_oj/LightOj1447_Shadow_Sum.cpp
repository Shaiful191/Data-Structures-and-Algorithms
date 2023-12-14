#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        set<int>s;
        s.insert(0);

        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a;
            b=-1*a;
            auto p=s.find(a);
            auto q=s.find(b);

            if(p==s.end() && q==s.end()) {
                s.insert(a);
            }
            else{
                if(p!=s.end())
                {
                    s.erase(a);
                }
                else
                {
                    s.erase(b);
                }

                s.insert(a);
            }


        }

        ll ans=0;
        set<int>::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            ans+=*it;
        }
        cout<<"Case "<<k<<": "<<ans<<endl;

    }


}
