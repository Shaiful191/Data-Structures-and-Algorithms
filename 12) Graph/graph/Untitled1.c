#include<stdio.h>
int n,e;

int arr[100][100];
char color[100];
int k=1;
int t=1;
int stime[100];
int fftime[100];
int ans[100];

void dfsvist(int x)
{
    color[x]='g';
    printf("%d  ",x);

    stime[x]=t;
    t++;


    for(int i=1;i<=n;i++)
    {
        if(arr[x][i]==1)
        {
            if(color[i]=='w')
            {
                dfsvist(i);
            }
        }
    }

    color[x]='b';

    fftime[x]=t;

    ans[k]=x;
    k++;
    t++;
}

void dfs()
{
    for(int i=1;i<=n;i++)
    {
        color[i]='w';
    }

    for(int i=1;i<=n;i++)
    {
        if(color[i]=='w')
        {
            dfsvist(i);
        }
    }
}

int main()
{
     FILE *f;
    f=fopen("graph.txt","r");

    fscanf(f,"%d %d",&n,&e);

    for(int i=1;i<=e;i++)
    {
        int a,b;
        fscanf(f,"%d %d",&a,&b);
        arr[a][b]=1;
    }

    dfs();

    printf("\n staring time & finishing time:\n");
    for(int i=1;i<=n;i++)
    {
        printf("node %d :  %d  %d \n",i,stime[i],fftime[i]);

    }
     printf("\n the topological sort is:\n");

     for(int i=n;i>=1;i--)
     {
         printf("%d  ",ans[i]);
     }

}
