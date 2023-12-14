#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>a;//creating a stack;
    // stack is a lifo means last in first out process;

    for(int i=0;i<3;i++)
    {
        int c;
        cin>>c;
        a.push(c);
    }
    a.push(5);
    a.push(6);//pushing value in top;


    cout<<"at now our top value is :"<<a.top()<<endl;

    a.pop();//deleting top;

    cout<<"after delete the top element now top:"<<a.top()<<endl;
    //our stack is empty or not;
    if(a.empty()==true)
        cout<<"stack is empty";
        else
            cout<<"stack is not empty";

}
