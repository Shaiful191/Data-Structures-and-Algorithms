#include<bits/stdc++.h>
using namespace std;
int top=-1;

void push(int Stack[],int value,int n)
{
    if(top==n-1) cout<<"overflow:stack is full" ;
    else {
        top++;
        Stack[top]=value;
    }

}

void pop(int Stack[])
{
   if(top==-1) cout<<"Underflow:Stack is empty";
   else top--;
}

string  isEmpty()
{
   if(top==-1) return "true";
   else return "false";

}

int Size()
{
  return top+1;
}

int topElement(int Stack[])
{
    return Stack[top];
}

int main()
{
    cout<<"Enter the stack size:";
    int n;
    cin>>n;
    int Stack[n];

    //isEmpty:
    cout<<"isEmpty: "<<isEmpty()<<endl;
    //Size:
    cout<<"Size of the stack: "<<Size()<<endl;

    //Push:
     push( Stack,6, n);
     push( Stack,7, n);
     push( Stack,2, n);
     push( Stack,1, n);
     push( Stack,4, n);

     cout<<"isEmpty: "<<isEmpty()<<endl;
     cout<<"Size of the stack: "<<Size()<<endl;
     cout<<"Top element of the stack: "<<topElement(Stack)<<endl;

     //display all value in the stack:
     int l=Size()-1;
     for(int i=l;i>=0;i--) cout<<Stack[i]<<endl;

     //pop:
     pop(Stack);
     cout<<"Top element of the stack after pop: "<<topElement(Stack)<<endl;
     cout<<"Size of the stack: "<<Size()<<endl;



     //display all value after deletion:
      l=Size()-1;
     for(int i=l;i>=0;i--) cout<<Stack[i]<<endl;




}
