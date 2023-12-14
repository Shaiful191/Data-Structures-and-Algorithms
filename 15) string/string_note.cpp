#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size()+1;
    char c[n];

    strcpy(c,s.c_str());
    cout<<c<<endl;
    cout<<c[0]<<endl;
    cout<<c[1]<<endl;
    cout<<char(toupper(c[0]))<<endl;
    cout<<char(tolower(c[1]))<<endl;
    bool u=(isupper(c[0]));
    if(u)
    {
        cout<<"yes"<<endl;
            /*  Converting uppercase characters to lowercase  */
            c[0] = c[0] + 32;
            cout<<c[0]<<endl;

    }
    else cout<<"no"<<endl;


    bool k=(islower(c[0]));
    if(k)
    {
        cout<<"yes"<<endl;
        /*  Converting  lowercase characters to uppercase  */
            c[0] = c[0] - 32;
            cout<<c[0]<<endl;

    }
    else cout<<"no"<<endl;
    bool l=(isdigit(c[0])); //digit=0,1,2,3,4,5,6,7,8,9;
    if(l) cout<<"yes"<<endl;
    else cout<<"NO"<<endl;



    ///how to convert string  to number:
    string s;
    cin>>s;
    stringstream k(s);//stringstream hoce libray function c++ er;
    int x=0;
    k>>x;
    cout<<x<<endl;
    ///ai string to number nicer moto kore o kora jay:
    string s;
    cin>>s;
    int n = stoi(s);//stoi hoce libary function;
    cout<<n<<endl;
    //

    ///how to convert number to string:
    int n;
    cin>>n;
    string str = to_string(n);
    cout << str << endl;
    //


    ///how to input a char in a string : just using push_back();

        string t;
        t.push_back(s[i]);
    //

    ///how to convert a char to number:
        3-'0';
    //

    ///how to reverse a string :
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;


      /// Convert a whole string uppercase to lowercase or lowercase to uppercase:

 // using transform() function and ::toupper in STL
    string su = "Jatin Goyal";
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;

 // using transform() function and ::tolower in STL
    string sl = "Jatin Goyal";
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;



}

