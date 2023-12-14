/*
      multimap a sob kisu map er motoi kintu
 multimap a ami duplicate key rakhte parvo mane
 map a jai rokom akta key akadik bar use korle
 tar value er man update hoye jai,multimap kintu
 update hoy na borog r akta notun key toire hoy;

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  multimap<string,int>ml;
  ml.insert({"ridoy",21});
  ml.insert({"ridoy",25});
  ml.insert({"ridoy",21});
  ml.insert({"joy",15});

  multimap<string,int>::iterator i;
  for(i=ml.begin();i!=ml.end();i++)
  {
      cout<<i->first<<" = "<<i->second<<endl;
  }
}
