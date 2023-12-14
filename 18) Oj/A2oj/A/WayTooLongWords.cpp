#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int k=s.size();
        if(k>10)
        {
            k=k-2;
            cout<<s[0]<<k<<s[s.size()-1]<<endl;


        }
        else{
            cout<<s<<endl;
        }
    }
}
