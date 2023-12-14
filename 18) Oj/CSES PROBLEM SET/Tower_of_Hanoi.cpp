#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    stack<int>a1;
    stack<int>a2;
    stack<int>a3;
    ll n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a1.push(i);
    }
    vector<int>a;
    vector<int>b;
    while(a1.empty()!=true)
    {
        if(a3.empty()==true || a3.top()>a1.top())
        {
            a3.push(a1.top());
            c++;
            a1.pop();
            a.push_back(1);
            b.push_back(3);

        }
        else if(a1.top()>a3.top())
        {
            if(a2.top()>a1.top()|| a2.size()==0)
            {
                a2.push(a1.top());
                c++;
                a1.pop();
                a.push_back(1);
                b.push_back(2);
            }
            else{
                a2.push(a3.top());
                c++;
                a3.pop();
                a.push_back(3);
                b.push_back(2);
            }
        }
    }

    while(a2.empty()!=true )
    {

        if(a3.top()>a2.top())
        {
            a3.push(a2.top());
            c++;
            a2.pop();
            a.push_back(2);
            b.push_back(3);
        }
        else{
            a1.push(a2.top());
            c++;
            a2.pop();
            a.push_back(2);
            b.push_back(1);
        }
    }

    while(a1.empty()!=true)
    {
        a3.push(a1.top());
        c++;
        a1.pop();
        a.push_back(1);
        b.push_back(3);
    }

    cout<<c<<endl;
    int i=0;
    while(c--)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
        i++;
    }








}
