/* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
   the adjacent elements if they are in wrong order.
   time:O(n2).
   space:O(1).
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the array size: ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter the array values:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

     
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}


