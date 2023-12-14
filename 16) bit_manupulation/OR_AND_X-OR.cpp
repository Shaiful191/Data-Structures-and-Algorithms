#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///OR:(|)
    int n=5|6;
    /*
      5=101
      6=110
    ---------
        111=7

    */
    cout<<n<<endl;

    ///AND:(&)
    int n1=5&6;
        /*
      5=101
      6=110
    ---------
        100=4

    */
    cout<<n1<<endl;


     ///X-OR:(^)
    int n2=5^6;
        /*
      5=101
      6=110
    ---------
        011=3 // X-OR a 2 ta mile gele 0 r na mile le 1;

    */
    cout<<n2<<endl;




}
