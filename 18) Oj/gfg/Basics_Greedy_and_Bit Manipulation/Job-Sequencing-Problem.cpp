#include<bits/stdc++.h>
using namespace std;

struct job
{
    int start,finish,profit;
};

bool compare (job a,job b)
{

    return a.finish<b.finish;
}


int findMProfit(job arr[],int n)
{
   sort(arr,arr+n,compare);
   int *dp=new int[n];
   dp[0]=arr[0].profit;
   for(int i=1;i<n;i++)
   {
       int including =arr[i].profit;
       int INconflict=-1;
       for(int j=1;j>=0;j--)
       {
           if(arr[j].finish<= arr[i].start)
           {
               INconflict=j;
               break;
           }
       }
       if(INconflict!=-1){
        including+=dp[INconflict];
       }
       dp[i]=max(including,dp[i-1]);
   }
   int ans=dp[n-1];
   delete[] dp;
   return ans;

}

int main()
{
    int n;
    cin>>n;
    job arr[n+1];//={{2,5,50},{1,2,20},{6,7,70},{2,50,400}};
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[i]={a,b,c};
    }

    cout<<"Maximum profit is "<<findMProfit(arr,n);
    return 0;

}

