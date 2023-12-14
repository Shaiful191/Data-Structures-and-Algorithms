#include<bits/stdc++.h>
using namespace std;
int main(){

 string s;
 getline(cin,s);

 unordered_map<string,int>wordFreq;

 //breaking input into word:
 stringstream bWord(s);

 string word;
 while(bWord >> word){  //operator >> :Read something from the stringstream object.
    wordFreq[word]++;
 }


 unordered_map<string,int>::iterator i;
 for(i=wordFreq.begin();i!=wordFreq.end();i++){
    cout<<i->first<<" "<<i->second<<endl;
 }


}
