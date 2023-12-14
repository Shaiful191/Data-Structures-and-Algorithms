#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>a; //creating a priority_queue acrroding max hiep;

    /* ami jodi min heap declare korte cai ,tahole nicar moto kore declare korte hove:
    // Creates a min heap
    priority_queue <int, vector<int>, greater<int> > pq;//ai khane int er jaigay jai data type use korte cai saita divo;
    */

    /*priority_queue means jar priority basi sa age jave ;
    akon ai priority ta 2 babe hisab kora jai:
    1) maxheap onusare(bydefault)
    2) minheap onusare
    */

    for(int i=0;i<3;i++)
    {
        int c;
        cin>>c;
        a.push(c);
    }
    a.push(5);
    a.push(6);
// sadaronoto top a sobcite boro value ta jai.jahatu aita max heap er moto kaj kore;
     a.pop();//deleting top value;
    cout<<"delating top value:"<<endl;

    while(!a.empty())
    {
        cout<<a.top()<<endl;
         a.pop();//ai babe ak ak a sobgula value delete hoye jave.
    }

    //our queue is empty or not;
    if(a.empty()==true)
        cout<<"queue is empty";
        else
            cout<<"queue is not empty";

}


