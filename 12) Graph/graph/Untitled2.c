
#include<stdio.h>
int n,e;
int arr[100][100];

/*
char color[100];
int k=1;
int t=1;
int stime[100];
int fftime[100];
int ans[100];
*/


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

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}
