#include <bits/stdc++.h>
using namespace std;

int arr[2][2] = {{0, 1},{1 ,1}};
int I[2][2]={{1,0},{0,1}};

void mul(int ans[][2], int arr[][2]){	
	int sum=0;
   int product[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				sum+=ans[i][k]*arr[k][j];
			}
			product[i][j]=sum;
			sum=0;
		}
	}


	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			I[i][j]=product[i][j];
		}
	}
}



void power(int a,int b,int n){

	while(n){
		if(n%2==1){
			mul(I,arr);
			n--;
		}
		else{
			mul(arr,arr);
			n/=2;
		}
	}

	int ans=a*I[0][1]+b*I[1][1];
	cout<<ans<<endl;


     
}

int main()
{
	int a,b;
	cin>>a>>b;

	int n;
	cin>>n;

	power(a,b,n-1);

}