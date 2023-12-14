
///using Right shift:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        if((n&1)!=0) ans++;
        n=n>>1;
    }
    cout<<ans<<endl;
}


/*
///using left shift:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;

    for(int i=0;i<32;i++)
    {
        if((n&(1<<i))!=0) ans++;
    }

    cout<<ans<<endl;
}
*/
