#include<bits/stdc++.h>
using namespace std;
#define infinity 10000000000
int arr[100][100];
int e[100][100];
int n,edge;
int dis[100],par[100];
char color[100];

void disVisit(int x)
{
   color[x]='g';

   for(int i=1;i<=n;i++)
   {
       dis[i]=dis[x]+1;
       if(arr[x][i]==1)
       {
           if(color[i]=='w')
           {
               cout<<x<<" -> "<<i<<"is a tree edge"<<endl;
               par[i]=x;

               disVisit(i);
           }
           else if(color[i]=='g')//ai khane bul output dakhay;
           {
                cout<<x<<"->"<<i<<"is a back edge"<<endl;
           }
           else if(color[i]=='b')
           {
               if(dis[x]<dis[i])
               {
                    cout<<x<<"->"<<i<<"is a forward edge"<<endl;
               }
               else  cout<<x<<"->"<<i<<"is a cross edge"<<endl;
           }
       }
   }
   color[x]='b';
}
void dfs()
{

  for(int i=1;i<=n;i++)
  {
      color[i]='w';
      dis[i]=0;
  }
  for(int i=1;i<=n;i++)
  {
      if(color[i]=='w'){
        disVisit(i);
      }
  }

}



int main()
{
    freopen("dur.txt","r",stdin);
    cin>>n>>edge;
    for(int i=0; i<edge; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;

    }
    dfs();


}
