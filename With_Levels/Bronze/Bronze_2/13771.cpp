// problem: Presents
// id: 13771
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(2);
    int n;
    cin >> n;
    vector<double> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    cout << v[1];

    return 0;
}