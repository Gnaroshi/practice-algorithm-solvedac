// problem: Zombie Invasion
// id: 9433
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> v(20);
        for (auto &i : v)
            cin >> i;
        for (int i = 18; i >= 0; i--)
        {
            v[i] += (v[i + 1]) / 2;
            v[i + 1] %= 2;
        }
        for (auto i : v)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}