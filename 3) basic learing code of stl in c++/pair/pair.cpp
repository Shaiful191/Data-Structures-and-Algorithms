#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string,int>p;//declare a  pair;

    p=make_pair("ridoy",6);//create a pair;
    /* ai kaj ta onno vabe o kora jai:
    p.first="ridoy";
    p.second=6;
    */

    /*
    //aber ami cile aksathe declare  o intialization o korte pari;
    pair<string,int>p("ridoy",6);
    */
    //printing the pair 1st and 2end value;
    cout<<p.first<<"="<<p.second<<endl;
}
