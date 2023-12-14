/*
iterator-its like a pointer.
        aita kisu kisu stl a use korte hoy.
  */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);

    vector<int> :: iterator it;// create a iterator.vector<int> ato tuku copy kore then :: then iterator keyword then iterator tar jaikono akta name diya dite hobe.
    //akon aikane jodi vector na hoya stack hoto tahole hoito stack<int>:: iterator it; ai rokom.

    it=v.begin();

    cout<<*it<<endl;//ai khane iterator namer age (*) cinno ta use korte hove.

    //akon ami jodi ai vector er sobgula value print korte cai iterator diya.
    cout<<"printing all value of vector:"<<endl;
    for(it=v.begin();it!=v.end();it++)//ai khane vector end bolte amder laster value ta bujai na tar porar gor ta bujay.
    {
       cout<<*it<<endl;
    }





}
