#include<bits/stdc++.h>
using namespace std;
#define N 100
int arr[N][N];
int I[N][N];


void mul(int I[][N],int arr[][N],int n){
    int sum=0;
    int mul[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sum+=I[i][k]*arr[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            I[i][j]=mul[i][j];
        }
    }
}




void power(int arr[N][N],int n,int p){

     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i==j)    I[i][j]=1;
             else  I[i][j]=0;      
         }
     }

     while (p)
     {
        if(p%2==1){
            mul(I,arr,n);
            p--;
        }
        else{
            mul(arr,arr,n);
            p/=2;
        }
     }
     

 }





int main(){
    int n,p;
    cin>>n>>p;
   

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    power(arr,n,p);
    
    cout<<"After matrix exponentiation: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<I[i][j]<<" ";
        }
        cout<<endl;
    }



}