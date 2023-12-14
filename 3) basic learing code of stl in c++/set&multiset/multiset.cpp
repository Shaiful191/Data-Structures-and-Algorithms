/*
multiset ar sob kisu set er moto .parthko holo
multiset a duplicate value rakha jai;
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    multiset<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<endl;
    }
    // akhon ami jodi dahkhte cai je akta number kotobar ase:
	cout<<"5 ase "<<s.count(5)<<" bar"<<endl;
	// Often, only one value should be removed, which can be done as follows:
	s.erase(s.find(5)); // aibabe kora jai but aita oto basi efficient na;
    //aikhane ami jodi sudu s.erase(5) dai tahole sobgula 5 muse jave;
    cout<<"5 ase "<<s.count(5)<<" bar"<<endl;

}
