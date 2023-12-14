#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>a;//creating a queue;
    // queue is a fifo means first in first out process;

    for(int i=0;i<3;i++)
    {
        int c;
        cin>>c;
        a.push(c);
    }
    a.push(5);
    a.push(6);//pushing value in top;


    cout<<"at now our front value is :"<<a.front()<<endl;

    a.pop();//deleting front value;

    cout<<"after delete the front element now front:"<<a.front()<<endl;
    //our queue is empty or not;
    if(a.empty()==true)
        cout<<"queue is empty";
        else
            cout<<"queue is not empty";

}

