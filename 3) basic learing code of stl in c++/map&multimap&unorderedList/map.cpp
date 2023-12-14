/*
সহজভাবে ম্যাপকে তুমি এভাবে চিন্তা করতে পারো, ম্যাপ হচ্ছে একটা অ্যারে,
যেটার ইনডেক্স যেকোন কিছুই হতে পারে, আর সেটাতে যেটা ইচ্ছে সেটাই রাখা যেতে পারে!
*)map a kono duplicate key thakte parve na tobe
 ami jodi ak ta ki akadik var dai tahole aita
  tar value r man ta update kore sobar sasar ta nibe;
*)sob gula key sorted akare asbe tar key or index onusare;

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp; //map declaration

    //value insert in map:
    mp.insert({"a",10}); //ai khane a ke bola hoy (key) & 10 ke vola hoy (value);
    mp.insert({"b",20});
    mp.insert({"c",30});
    mp.insert({"d",40});
    mp.insert({"e",50});

    mp["a"]=10; //ai babe o value insert kora jay.


    //print all the map value:
    for(auto it:mp)
    {
        cout<<it.first<<"="<<it.second<<endl;
    }

    /*
       //ami caile ai babe o iterator use kore print korte pari:
       map<string,int>::iterator it;
       for(it=mp.begin(); it!=mp.end(); it++)
       {
           cout<<it->first<<"="<<it->second<<endl;//first=key,second=value;
       }
       */


    cout<<"Old value of d index: "<<mp["d"]<<endl; //array er moto index diye value cheak korte pari;
    mp["d"]=51; //value update of a specific index or key.just like a array.
    mp["d"]+=3;
    mp["d"]++;
    cout<<"After updating of d index: "<<mp["d"]<<endl;

    //ami jodi cai je kono akta value delete kore dibo map thake :
    mp.erase("d"); // erase er maje key ta diye dite hove




    //  map count fuction use in map: aita use kora hoy kono akta map er mode akta value ase kina saita dakhate.count function er mode key use kora hoy.
    if(mp.count("a"))
    {
        cout<<"it is present "<<endl;
    }
    else
        cout<<"it is not present"<<endl;

    cout<<"The first value of the map is : "<<mp.begin()->second<<endl;


   //lower_bound:oita takle to oitai r na thakle tar imiditer porar value ta.r jodi tar porar value ta end() er dike point kore tahke tahole garvaj value dakhbe;

   auto it=mp.lower_bound("b");
   cout<<"lower bound of "<<it->first<<" is: "<<it->second<<endl;

   it=mp.lower_bound("d"); // it er age auto nai karon aita oporer line a akber decalare kora hoise.
   cout<<"lower bound of "<<it->first<<" is: "<<it->second<<endl;

    //it=mp.lower_bound("z"); // aita sobcaite boro index r aita nai tai error dakhbe;
   //cout<<"lower bound of "<<it->first<<" is: "<<it->second<<endl;

   //upper_bound:oita takuk ba na takuk  tar imiditer porar value ta show korve.r jodi tar porar value ta end() er dike point kore tahke tahole garvaj value dakhbe;

    auto tt=mp.upper_bound("b");
   cout<<"upper bound of "<<tt->first<<" is: "<<tt->second<<endl;

    tt=mp.upper_bound("d"); // it er age auto nai karon aita oporer line a akber decalare kora hoise.
   cout<<"upper bound of "<<tt->first<<" is: "<<tt->second<<endl;

   // tt=mp.upper_bound("z"); // aita sobcaite boro index r aita nai tai error dakhbe;
   //cout<<"upper bound of "<<tt->first<<" is: "<<tt->second<<endl;


   //copying one map to another map:
   map<string,int>mp1;
   mp1=mp;
   for(auto ti:mp1)
    {
        cout<<ti.first<<"="<<ti.second<<endl;
    }

    //swaping 2 map:

    mp1.insert({"f",80});
    swap(mp,mp1);

    for(auto ti:mp)
    {
        cout<<ti.first<<"="<<ti.second<<endl;
    }





   //clear full map:
    mp.clear();

    //cheak map is empty or not:
    if(mp.empty()) cout<<"the map is empty"<<endl;
    else cout<<"the map is not empty"<<endl;

    cout<<"The maximum size of this map is :"<<mp.max_size()<<endl;





}

