#include<bits/stdc++.h>
using namespace std;

///n=5;1+2+3+4+5=15;

int sum_1_to_n(int n){
    if(n==1)
    return 1;

    return n+(sum_1_to_n(n-1));

}

int main()
{
    int n;
    cin>>n;
    cout<<sum_1_to_n(n)<<endl;
}
