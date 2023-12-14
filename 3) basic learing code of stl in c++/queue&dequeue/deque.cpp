#include<bits/stdc++.h>
using namespace std;
int main()
{
        deque<int>d;
        /*
           deque hoce queue er moto.but difference hoce ai khane oboy dik thake push and pop kora jai.
        */

       int a;
       cin>>a;
       d.push_back(a);
       int b;
       cin>>b;
       d.push_front(b);
        while(!d.empty())
        {
            cout<<d.front()<<endl;
            d.pop_front();
        }
       int c;
       cin>>c;
       d.push_back(c);
       int e;
       cin>>e;
       d.push_front(e);
       while(!d.empty())
        {
            cout<<d.back()<<endl;
            d.pop_back();
        }



}
