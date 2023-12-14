#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    int ans=19;
    int i=1;
    while(t--){

        int m,l;
        cin>>m>>l;

        if(m<=l){
            ans+=l*4;
        }
        else{
            ans+=(m-l)*4;
            ans+=m*4;
        }

        cout<<"Case "<<i<<": "<<ans<<endl;
        i++;
        ans=19;
    }
}
