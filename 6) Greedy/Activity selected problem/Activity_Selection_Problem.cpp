#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> &a,vector<int> &b)
{
    return a[1]<b[1]; //a[1]=a er finish time; b[1]=b er finish time;
}

int main()
{
    int n;
    cin>>n;

    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int start,finish;
        cin>>start>>finish;
        //v[i]-----> v[0] , v[1]
        v.push_back({start,finish}); //ai kaj ta structure use kore o kara jay but aitai batter.
    }

    sort(v.begin(),v.end(),compare);

    int take=1;  //After sorting first element is always count.
    int finish=v[0][1];
    for(int i=1;i<n;i++)
    {
        if(v[i][0]>=finish)
        {
            take++;
            finish=v[i][1];
        }
    }

    cout<<take<<endl;

}


/* terget: koto basi activities kora jay.

Example 1 :
    6
    4 8
    2 5
    4 6
    1 4
    3 7
    8 9
A person can perform at most 3 activities.

*/
