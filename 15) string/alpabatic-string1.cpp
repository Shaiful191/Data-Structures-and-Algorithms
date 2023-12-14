#include<bits/stdc++.h>

using namespace std;

int main()
{
    int upper=0,lower =0,number=0,spicial=0;
    cout<<"enter a string:"<<endl;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>=48 && s[i]<=57)//'0'=48;
        {
            number+=1;
        }
        else if(s[i]>=65 && s[i]<=90)//ai kane 65 er jaihgai 'A' r 90 er jaigai 'Z' dilai o hoito;
        {
            upper+=1;
        }
        else  if(s[i]>=97 && s[i]<=122)//ai kane 97 er jaihgai 'a' r 122 er jaigai 'z' dilai o hoito;
        {
            lower+=1;
        }

        else
        {
            spicial+=1;
        }


    }
    cout<<"number of uppercase :"<<upper<<endl;
    cout<<"number of lowercase :"<<lower<<endl;
    cout<<"number of number :"<<number<<endl;
    cout<<"number of special_character  :"<<spicial<<endl;

}



