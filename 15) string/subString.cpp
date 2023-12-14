#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,sub;
  cin>>s>>sub;
  if(sub.empty()) cout<<0<<endl;
  else if(sub.size()>s.size()) cout<<-1<<endl;
  else{
      int found=s.find(sub);
      if(found==-1) cout<<-1<<endl;
      else cout<<found<<endl;
  }

}
