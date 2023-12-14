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

    ///sorting:
    sort(v.begin(),v.end());

    ///binary_search:
    /*for binary_search,upper_bound,lower_bound aisob khatre value gula
     ovosoi sorted thakte hoy,naile ai function gula kaj korve na;*/
    cout<<"Enter finding value:";
    int e;
    cin>>e;
    bool ans=binary_search(v.begin(),v.end(),e);
    // set hoile ai kaj ta : s.binary_search(e);ai babe ditam;
    if(ans) cout<<"found"<<endl;
    else cout<<"not found"<<endl;

    ///Lower_bound:
    /*lower_bound = jai value search kora hoy tar soman or tar thika voro
    first element ta dahay.R jodi tar thika boro kono value na thake
    tahole end() er dike point kore thake;*/

    auto it=lower_bound(v.begin(),v.end(),e);
    if(it==v.end()) cout<<"out of bound"<<endl;
    else{
    cout<<endl<<*it<<"  is found in position:  ";
    // ami jodi cai je koto number index a ase:
    cout<<distance(v.begin(),it);
    }

    ///Upper_bound:
    /*upper_bound = jai value search kora hoy sai value ta thakuk ba na thakuk
     tar thika voro first element ta dahay.R jodi tar thika boro kono value na thake
    tahole end() er dike point kore thake;*/

    auto itt=upper_bound(v.begin(),v.end(),e);
    if(itt==v.end()) cout<<"out of bound"<<endl;
    else{
    cout<<endl<<*itt<<"  is found in position:  ";
    // ami jodi cai je koto number index a ase:
    cout<<distance(v.begin(),itt);
    }
    /* A simple problem:

    jodi vector er value gula nicar moto hoy:
    {1,3,3,3,5,8,9,12}
    then e=3 diya
    //for finding first 3;
    lower_bound dile 1 no.index er 3 ta show korve;

    //for finding last  3;
    upper_bound dile 4 no.index er 5 show korve;
    then index-1 korle paiya jamu; or cout<<distance(v.begin()+1,itt) aive o kora jai;
    */

}
