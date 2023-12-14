#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n,string result)
{
    if(n==0)
    return result; ///Base case: When can I no longer continue?

    result=result+to_string(n%2);

    return decimal_to_binary(n/2,result); ///Recursive call: What is the smallest amount of work I can do in each iteration?
}
int main()
{
    int n;
    cin>>n;
    string s="";
    string ans=decimal_to_binary(n,s);
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
