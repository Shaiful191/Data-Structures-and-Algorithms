///structure R class er mode difference hose :
/// structure er mode sudu variable+string+array rakha jay but function rakah jay na;
/// Class er mode sob rakha jay.


#include<bits/stdc++.h>
using namespace std;

struct person{
    string name;
    int age;

};

int main()
{
    string name;
    cin>>name;

    int age;
    cin>>age;

    person shaiful={
     name,age
    };
    string name1;
    cin>>name1;

    int age1;
    cin>>age1;
    person ridoy={
     name1,age1
    };


    cout<<"Your name is: "<<shaiful.name<<endl;
    cout<<"Your age is: "<<shaiful.age<<endl;

    cout<<"Your name is: "<<ridoy.name<<endl;
    cout<<"Your age is: "<<ridoy.age<<endl;


}

