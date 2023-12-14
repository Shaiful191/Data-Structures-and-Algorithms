#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      deque<int>d;
      int n,m;
      cin>>n>>m;
      cout<<"Case "<<i<<":\n";
      for(int j=0;j<m;j++)
      {
          string s;
          cin>>s;
          if(s[1]=='u'){
            int a;
            cin>>a;
            if(d.size()==n) {
                cout<<"The queue is full"<<endl;
            }
            else{
               if(s[4]=='L')
               {
                   d.push_front(a);
                   cout<<"Pushed in left: "<<a<<endl;
               }
               else{
                   d.push_back(a);
                    cout<<"Pushed in right: "<<a<<endl;
               }

            }

          }
          else{
            if(d.size()==0) cout<<"The queue is empty"<<endl;
            else{
                if(s[3]=='L') {
                    cout<<"Popped from left: "<<d.front()<<endl;
                    d.pop_front();
                }
                else{
                    cout<<"Popped from right: "<<d.back()<<endl;
                    d.pop_back();
                }
            }
          }
      }
      d.clear();

  }


}
