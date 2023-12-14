
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    cout<<s<<endl; //next_permutation nijere count kore na;
    while(next_permutation(s.begin(),s.end()))
    {
        cout<<s<<endl;
    }
}

/*

abc ke nicer moto kore permutation kora jay.
next permutation a nije ke count kore na tar next er gula ber kore.
next permutation er age sort kore neoya balo.
------
abc
acb
bac
bca
cab
cba

*/



/* permutation for a vector:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    while(next_permutation(v.begin(),v.end()))
    {
         for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }

}
*/

