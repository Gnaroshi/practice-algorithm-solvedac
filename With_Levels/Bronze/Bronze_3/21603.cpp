// problem: K 2K 게임
// id: 21603
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, a, b, t;
    cin >> n >> k;
    a = k % 10;
    b = k * 2 % 10;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        t = i % 10;
        if (t != a && t != b)
            v.push_back(i);
    }
    cout << v.size() << '\n';
    for (auto i : v)
        cout << i << ' ';

    return 0;
}