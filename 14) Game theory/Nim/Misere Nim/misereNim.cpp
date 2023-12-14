///Nim R misere nim er difference holo :The player who removes the last stone loses the game.

/*
    তবে যদি প্রতিটা স্তুপেই ঠিক ১টা করে পাথর থাকে তখন আর xorsum দিয়ে কাজ হবে না।
    তখন দেখতে হবে স্তুপের সংখ্যা জোড় নাকি বেজোড়।
    *even----->first
    *odd------>second
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;


    int c=1;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        if(a!=c) c=0;

    }

    if(c==1)
    {
        if(n%2==0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    else
    {
        int ans=0;

        for(int i=0; i<v.size(); i++)
        {
            ans=ans^v[i];
        }
        if(ans==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }

}
