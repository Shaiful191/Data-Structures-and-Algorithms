///Hackerrank Problem Name: Game of Stones
///ai doroner problem 2 babe kora jay: 1) O(1) complexity te; 2)O(n) complexity te.


/// O(1) complexity : O(1) complexity te korte gale amader akta patten ber korte hove;
// jamon ai problem a losing state  holo n%7==0 || n%7==1 . ta na hole winning.aita ber korte hove.
/*
   2, 3 ,5 ai 3 ta number er mode jai kono akta pic krote parbo:

   0----->L
   1----->L

   2----->W
   3----->W
   4----->W
   5----->w
   6----->w

   7----->L
   8----->L

   9----->w
   10---->w
   11----->w
   12----->w
   13----->w

   14----->L
   15----->L
   .....
   16----->w
   17----->w
   18----->w
   19----->w
   .
   .
   ..ai babe coltai takbe.

   Q: ai rokom koto porjonto dakhle amra akta patten pavo ?
   Ans: sorboco joto gula pic kora jave ta jodi k hoy tahole 2^k porjonto gele
   amra peye jabo. onk somoy tar ageo peye jate pare jamon ai problem a 2^k=2^5=32
   ta porjonto sorboco cheake korleai amra patten paye jabo but ta age o pate pari.

   Onk somoy n er man onk boro dile ai rokom patten ber na kore korle tle asbe.



*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n%7==0 || n%7==1)
    cout<<"Second"<<endl;
    else
    cout<<"First"<<endl;

    }

}




/// O(n) complexity : sadaronto patten ola question e day.but jodi ami patten khuji na pai tahole ai vave korbo;

/*
#include <bits/stdc++.h>
using namespace std;
int main() {

    int dp[101]={0}; // n er maximum size joto dite pare tar thake 1 basi;

    dp[0]=0; //0 means losing position
    dp[1]=0;
    dp[2]=1; //1 means winning position
    dp[3]=1;
    dp[4]=1;
    dp[5]=1; //sorboco joto number porjonto pic kora jay toto porjonto ber korte hove.

    for(int i=6;i<=100;i++)
    {
        if(dp[i-2]==0 || dp[i-3]==0 || dp[i-5]==0) // jodi i thika jai number gula dive saigular jai kono akta  minus korle losing state a palono jay tahole oi state ta winning state r ta na hole oi state ta losing state.
        dp[i]=1;
        else
        dp[i]=0;

    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(dp[n]) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

      return 0;
}


*/


