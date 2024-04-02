#include<bits/stdc++.h>
using namespace std;

// pair
void explainPair(){
    pair<int, int> p = {1,4};

    cout << p.first << endl;

    pair<int, pair<string, int>> p2 = {1, {"Abhi",5}};
    cout<<p2.second.first;

    pair<int, int> arr[] = {{1,3},{5, 56}, {45,5}};

    cout << arr[1].second;
}

// vector
void explainVector(){
    vector<int> v;

    v.push_back(1);
    
}

int main()
{
    // explainPair();
    explainVector();
    return 0;
}
