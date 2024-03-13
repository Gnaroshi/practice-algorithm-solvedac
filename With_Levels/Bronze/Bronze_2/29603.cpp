// problem: Треугольник
// id: 29603
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0;
    vector<pair<int, int>> v(3);
    for (auto &i : v)
    {
        cin >> i.first >> i.second;
        a += i.first;
        b += i.second;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a - 2 * v[i].first << ' ' << b - 2 * v[i].second << '\n';
    }

    return 0;
}