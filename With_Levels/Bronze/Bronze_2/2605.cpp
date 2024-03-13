// problem: 줄 세우기
// id: 2605
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        v.insert(v.begin() + t, i);
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << ' ';

    return 0;
}