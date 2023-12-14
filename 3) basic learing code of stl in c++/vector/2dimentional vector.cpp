#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v1;
    for(int i=0;i<3;i++)
    {
        vector<int>v2;
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            v2.push_back(a);
        }
        v1.push_back(v2);
    }
  cout<<"output :"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}
