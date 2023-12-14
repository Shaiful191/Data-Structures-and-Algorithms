#include<bits/stdc++.h>
using namespace std;


bool checkprime(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void sieveOfErathenes(int n){
    int prime[n+1];
    memset(prime,0,sizeof(prime));
       
    for(int i=2;i*i<=n;i++){
        if(prime[i]==0){
            for(int j=i*2;j<=n;j+=i){
                prime[j]=1;

            }

        }
    }

    cout<<"Prime value from 2 to N: ";
    for(int i=2;i<=n;i++){
        if(prime[i]==0)
        cout<<i<<" ";
    }


}


void primeFactorization(int n){

    cout<<"\nAfter prime Factorization: ";

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int c=0;
            while (n%i==0)
            {
                c+=1;
                n=n/i;

            }

            cout<<i<<"^"<<c<<", ";
            
        }
    }

     if(n>1)
     cout<<n<<"^"<<1<<endl;

}

int main(){

  int n;
  cin>>n;

  if(checkprime(n)==true) cout<<"prime"<<endl;
  else cout<<"Not prime!"<<endl;

  sieveOfErathenes(n);
  
  primeFactorization(n);
  

}