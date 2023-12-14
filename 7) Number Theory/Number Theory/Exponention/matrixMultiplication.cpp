/*
Notes:
1) In order to multiply two matrices,
   columns of 1st matrix=row of 2nd matrix.

2) Also,size of the resultant matrix depends on 
   row of 1st matrix  and columns of 2nd matrix.

YouTube Link: https://www.youtube.com/watch?v=jzdQqoG1tZs
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Enter the number of row and col of matirx a: ";
    int arow,acol;
    cin>>arow>>acol;
     
     cout<<"\nEnter the a matrix value: "<<endl;
     int a[arow][acol];

     for(int i=0;i<arow;i++){
         for(int j=0;j<acol;j++){
             cin>>a[i][j];
         }
     }


    cout<<"Enter the number of row and col of matirx b: ";
    int brow,bcol;
    cin>>brow>>bcol;
     
     cout<<"\nEnter the b matrix value: "<<endl;
     int b[brow][bcol];
     
     for(int i=0;i<brow;i++){
         for(int j=0;j<bcol;j++){
             cin>>b[i][j];
         }
     }



      cout<<"After multiplication of matirx a and b : "<<endl;
      
      int result[arow][bcol];
      int sum=0;
      for(int i=0;i<arow;i++){
          for(int j=0;j<bcol;j++){
              for(int k=0;k<brow;k++){
                  sum+=a[i][k]*b[k][j];
              }
              result[i][j]=sum;
              sum=0;
          }         
      }


      for(int i=0;i<arow;i++){
          for(int j=0;j<bcol;j++){
              cout<<result[i][j]<<"  ";
          }
          cout<<endl;
      }
    


}