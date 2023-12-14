#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n=5<<2; //left shift
    cout<<n<<endl;

    int n1=5>>2; //right shift
    cout<<n1;

}

    /*
        we know the shortcut tacnik,
        32,16,8,4,2,1
      5=        1 0 1
     10=      1,0,1,0



  Left shift:
       ami jodi 5 er 1 gor left shift kori tahole hobe:
           32,16,8,4,2,1
      5=         1 0 1 0 --->decimal value(10) //ami sobgula bit 1 gor kore left a shift korse r right er gor gulate 0 bosise.
       ami jodi 5 er 2 gor left shift kori tahole hobe:
           32,16,8,4,2,1
      5=       1 0 1 0 0 --->decimal value(20)//ami sobgula bit 2 gor kore left a shift korse r right er gor gulate 0 bosise.

      Tar mane value bartase.R ami jodi cai je aibabe ber na kore sorsori ber korte je 2 gor
      ba 3 gor mane index bole divo je koto gor sorbe left a then se oto gor sorar pore tar
      bortoman decimal value koto?
      formula is : number*2^i  ;i= joto gor sorbe;
      for 5      :  5*2^1=5*2=10; i=1;
      for 5      :  5*2^2=5*4=20; i=2;

     c++ built_in:  number<<i
       int n=5<<2;
       cout<<n;
       output:20;




 Right shift:
       ami jodi 5 er 1 gor right shift kori tahole hobe:
           32,16,8,4,2,1
      5=           0 1 0 | 1 --->decimal value(2) //ami sobgula bit 1 gor kore right a shift korse r left er gor gulate 0 bosise r right a index er bahirer bit gula bad jamon ai khane 1.
       ami jodi 5 er 2 gor left shift kori tahole hobe:
           32,16,8,4,2,1
      5=               1 |0 1 --->decimal value(1)//ami sobgula bit 2 gor kore right a shift korse r left er gor gulate 0 bosise.

      Tar mane value komtase.R ami jodi cai je aibabe ber na kore sorsori ber korte je 2 gor
      ba 3 gor mane index bole divo je koto gor sorbe right a then se oto gor sorar pore tar
      bortoman decimal value koto?
      formula is : number/2^i  ;i= joto gor sorbe;
      for 5      :  5/2^1=5/2=2; i=1;
      for 5      :  5/2^2=5/4=20; i=2;

     c++ built_in:  number>>i
       int n=5>>2;
       cout<<n;
       output:1;


       */

