#include<bits/stdc++.h>
using namespace std;

vector<int>lpss(string patten){
 vector<int>lps(patten.size());
 int index=0;
 for(int i=1;i<(int)patten.size();)
 {
     if(patten[index]==patten[i]) lps[i]=index+1,i++,index++;
     else
     {
         if(index!=0) index = lps[index-1];
         else lps[i]=index,i++;
     }
 }

return lps;
}

void kmp(string text,string patten){
    bool found =false;

    vector<int>lps=lpss(patten);
    int i=0,j=0;
    while(i<(int)text.size()){
        if(text[i]==patten[j]) i++,j++;
        else{
            if(j!=0) j=lps[j-1];
            else i++;
        }
        if(j==(int)patten.size())
        {
            found=true;
            cout<<"match start:"<<i-patten.size()<<endl;// for  see location start;
            j=lps[j-1]; // if match multiple time;
        }
    }
    if(!found) cout<<"not found"<<endl;
}
int main()
{

    string text,patten;
    cout<<"enter a text:"<<endl;
    getline(cin,text);
    cout<<"enter a text:"<<endl;
    getline(cin,patten);
    kmp(text,patten);
}
