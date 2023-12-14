#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;//declare vector;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);//add element at the end;
    v.push_back(4);
    v.push_back(5);

    v.pop_back();//delete element at the end;
    cout<<"after deletion end element 5,now our vector element is 1 2 3 4"<<endl;

//input value from user;
     int n;
     cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;

        cin>>a;
        v.push_back(a);
    }

//now we want to insert a value in a particular index like 4 ;
    v.insert(v.begin()+4,6);

    int a;
    a=v[4];//accessing a particular index;
    cout<<"the value of index 4 is:"<<a<<endl;



    v.erase(v.begin()+5);
    cout<<"After delete index 5 value now v[5]=is:"<<v[5]<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    // now erase some value of the vector;
    v.erase(v.begin()+1,v.begin()+4);//v.begin()+4=index 4 er ager sob delete hoye jave;

    int l=v.size();//finding size;
    cout<<"the size of vector:"<<l<<endl;
    //ami akhon v vector ta ke copy kore t te rakhbo.
    vector<int>t;
    v=t;
    //reverse vector :
    reverse(v.begin(),v.end());
    //printing vector;

    for(int i=0; i<l; i++)
    {
        cout<<t[i]<<endl;
    }

    v.clear();//deleting all value from the vector;

    if(v.empty()==true)
        cout<<"\n empty"<<endl;
    else
        cout<<"\n not empty"<<endl;


}
