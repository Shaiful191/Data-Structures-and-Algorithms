#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0;
    cin>>n;

    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        d+=1;
        else if(n%i==0)
        d+=2;
    }
    cout<<"divisor is ="<<d<<endl;
    if(d==2)
        cout<<"prime"<<endl;//karon prime number er divisor sobsomoy 2 ta (1&n).

    else cout<<"not prime "<<endl;
}
