/*
Merge sort is a Divide And Conquer algorithm.
Idea: Divide the array into two parts, sort the left part and sort the right part and merge them
Time Complexity: O(N logN)
Space Complexity: O(N) Since we need an arbitrary array as well.

*/

#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int mid, int r)
{

    int n1 = mid - l + 1; ////index 0 theke suru tai 1 add kora hoise size a;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);     // left subarray
        mergeSort(arr, mid + 1, r); // Right subarray
        merge(arr, l, mid, r);
    }
}

int main()
{
    cout << "Enter the array size:";
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
