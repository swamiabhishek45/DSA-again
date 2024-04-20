#include <bits/stdc++.h>
using namespace std;

// Brute Force --> O(nlogn) / O(n)
void bruteForce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

// Recursive Approach --> O(n) / O(1)
void recursiveApp(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout <<  max;
}

int main()
{
    int n = 6;
    int arr[n] = {3, 1, 4, 5, 2, 6};

    bruteForce(arr, n);
    cout << arr[n - 1] << endl;

    recursiveApp(arr, n);

    return 0;
}