// problem: Class Field Trip
// id: 27386
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> v;
    string a, b;
    cin >> a >> b;
    for (auto i : a)
        v.push_back(i);
    for (auto i : b)
        v.push_back(i);
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i;

    return 0;
}