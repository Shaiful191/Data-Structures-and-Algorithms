#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int k=1;k<=t;k++)
    {
    string cp="http://www.lightoj.com/";
        stack<string>b;
        stack<string>f;
        cout<<"Case "<<k<<":"<<endl;
        while(1)
        {
            string cm;
            cin>>cm;

            if(cm[0]=='V'){
                string v;
                cin>>v;
                b.push(cp);
                cp=v;
                cout<<cp<<endl;
                while(!f.empty()){
                    f.pop();
                }

            }
            else if(cm[0]=='B')
            {
                if(b.empty()) cout<<"Ignored"<<endl;
                else{
                    f.push(cp);
                    cp=b.top();
                    b.pop();
                    cout<<cp<<endl;
                }
            }

            else if(cm[0]=='F')
            {
                if(f.empty()) cout<<"Ignored"<<endl;
                else{
                    b.push(cp);
                    cp=f.top();
                    f.pop();
                    cout<<cp<<endl;
                }
            }
            else{
                break;
            }

        }
    }
}
