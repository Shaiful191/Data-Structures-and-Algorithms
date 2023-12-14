///Accepted Answer:

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){

    string a;
    cin>>a;
    int b;
    cin>>b;
    if (b < 0) b = abs(b); //suru te minus sign thakle bad diye hisab korve;
    ll r=0;
    int j=0;
    if (a[0] == '-') j = 1; //suru te minus sign thakle bad diye hisab korve;

    for(int i=j;i<a.size();i++)
    {
        r=r*10+(a[i]-'0'); //for example:97/2---> 9%2=1 then we calculate 17 ; //string to integer a[i]-'0'
        r=r%b;

    }

    if(r==0)
    cout<<"Case "<<k<<": divisible"<<endl;
    else cout<<"Case "<<k<<": not divisible"<<endl;



    }

}


///Runtime error solution:

/*


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){

    string a;
    cin>>a;
    int b;
    cin>>b;
    if (b < 0) b = abs(b);
    ll r=0;
    int j=0;
    if (a[0] == '-') j = 1;

    for(int i=j;i<a.size();i++)
    {
        string  x;
        string s = to_string(r);
        x=s+a[i];
        r=0;
        int c;
        c = stoi(x);
        r=c%b;

    }

    if(r==0)
    cout<<"Case "<<k<<": divisible"<<endl;
    else cout<<"Case "<<k<<": not divisible"<<endl;



    }

}
*/
