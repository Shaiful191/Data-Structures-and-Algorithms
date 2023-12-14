/*
SETS:

Consider we need a container for the following features:
1. Add an element but do not allow duplicates.
2. Have the elements sorted in increasing order.
3. Remove elements.
4. Get count of elements(distinct)
5. finding any value.
6. Check whether set is empty or not i.e whether there
are any elements in the set or not.


*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }

    //Printing the size of the set S.
	cout<<"size="<<s.size()<<endl;

    set<int>::iterator i;
    cout<<"print all value"<<endl;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<endl;
    }
    //delete the element-jaita ai set er mode ase like 2,5  from set S
	s.erase(2);
	s.erase(5);
	cout<<"print all value after delation"<<endl;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<endl;
    }

    //Printing the first element in S i.e the smallest element.
	cout<<"begin="<<*(s.begin())<<endl;
	//Printing the last element in S i.e the largest element
	cout<<"end="<<*(s.rbegin())<<endl;

	//
	auto t=s.find(3);//3 er jaigay finding value dite hove;
	if(t==s.end()) cout<<"3 is not found"<<endl;
	else cout<<"found"<<endl;


}
