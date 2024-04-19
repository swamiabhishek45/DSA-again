#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];                              // Best Case --> nlog(n)
            arr[j] = temp;                               // Worst Case --> n^2
        }
    }
    return i;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main()
{
    int arr[8] = {4, 6, 2, 5, 7, 9, 1, 3};
    int low = 0;
    int high = 7;

    quickSort(arr, low, high);

    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}