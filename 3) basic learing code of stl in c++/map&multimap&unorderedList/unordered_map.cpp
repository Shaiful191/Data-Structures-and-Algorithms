/*
    unordered_map vs map :
    map (like set) is an ordered sequence of unique keys whereas in
    unordered_map key can be stored in any order, so unordered.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    //Create:
    unordered_map<string,int>umap;
    umap["Bangladesh"]=20;
    umap["America"]=14;
    umap["Chaina"]=16;

    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }

    //Insert:
    umap.insert(make_pair("India",18));


    //Search:
    if (umap.find("India")==umap.end()) cout<<"NOt found!";
    else cout<<"This key is found and the value is: "<<umap["India"]<<endl;

    //Delete:
    umap.erase("Chaina");

    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }








}
