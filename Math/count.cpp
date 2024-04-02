#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENter Number : ";
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        count++;
        n = n / 10;
    };

    cout << "Count : " << count;

    return 0;
}