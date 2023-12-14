
///using Right shift:
#include<bits/stdc++.h>
using namespace std;
int main()
{

  ///set bit means 1;
  ///Unset bit means 0;
  cout<<"Enter the number and i-th bit: ";
  int n,m;
  cin>>n>>m;

  int ans=n>>m;
  if((ans&1)!=0) cout<<"i-th bit is set or 1"<<endl;
  else cout<<"i-th bit is unset or 0"<<endl;

}



///using left shift:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{

  ///set bit means 1;
  ///Unset bit means 0;
  cout<<"Enter the number and i-th bit: ";
  int n,m;
  cin>>n>>m;

  int ans=n<<m;
  if((ans&1)!=0) cout<<"i-th bit is set or 1"<<endl;
  else cout<<"i-th bit is unset or 0"<<endl;
}
*/





 /*

            Explaination for right shift:
   3 2 1 0
10=1 0 1 0

***what is the value of 2 th index?
ans:Joto number index er value dakhte cai toto gor right shift krobo.then 1 dara AND korvo.
    finally ans jodi 0 ase taile unset r ta na hole set.


     1 0 1| 0 (1 gor right shift)
       1 0| 1 0 (2 gor right shift)
------------------
       1 0
    &  0 1
------------------
       0 0----->0


 Explaination for left shift:same of right shift but aikhane right shift na kore left shift kori.


  */



