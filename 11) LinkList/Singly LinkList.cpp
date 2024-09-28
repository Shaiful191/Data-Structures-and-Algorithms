/*

Linked List:
-------------
It is a list or collection of data items that can be stored in scattered locations
in memory.To store data in scattered locations in memory we have to make link
between one data item to another.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

      //creating node data type:
      struct node{
       int data;
       node *next;
      };

      //Declare necessary pointer:
      node *List,*nptr,*tptr;

      //Creating a null list.
      List=NULL;

      cout<<"Enter number of nodes:";
      int n;
      cin>>n;

      cout<<"Enter the data of the linklist:";
      int item;
      for(int i=0;i<n;i++){
        cin>>item;

        //creating new node:
        nptr=new(node);
        nptr->data=item;
        nptr->next=NULL;

        //Adding new node to the list
        if(List==NULL){
            List=nptr;
            tptr=nptr;
        }
        else{
            tptr->next=nptr;
            tptr=nptr;
        }



      }

      cout<<"The output is : ";
      tptr=List;
      for(int i=0;i<n;i++){
        cout<<tptr->data<<" ";
        tptr=tptr->next;
      }

      //Search:
      cout<<endl<<"Enter the finding node:";
      int f,s=0;
      cin>>f;
      tptr=List;
      for(int i=0;i<n;i++){
        if(tptr->data==f) s=1;
        tptr=tptr->next;
      }
      if(s) cout<<"Found"<<endl;
      else cout<<"Not Found"<<endl;


      //Insert:
      cout<<"Enter the new item: ";
      cin>>item;
      nptr=new(node);
      nptr->data=item;
      nptr->next=NULL;

      tptr=List;
      for(int i=0;i<n;i++){
        if(tptr->next->data > nptr->data){
            nptr->next=tptr->next;
            tptr->next=nptr;
            break;
        }
        tptr=tptr->next;
      }
      cout<<"After insert the new output is : ";
      tptr=List;
      for(int i=0;i<n+1;i++){
        cout<<tptr->data<<" ";
        tptr=tptr->next;
      }


      //Delete:
      cout<<endl<<"Enter the deleted value:";
      int del;
      cin>>del;
      tptr=List;
      node *pptr;
      for(int i=0;i<n+1;i++){
        if(tptr->data==del){
           pptr->next=tptr->next;
           delete(tptr);
        }
        else{
            pptr=tptr;
        tptr=tptr->next;
        }
        
      }

      cout<<"After Delete the new output is : ";
      tptr=List;
      for(int i=0;i<n;i++){
        cout<<tptr->data<<" ";
        tptr=tptr->next;
      }


}
