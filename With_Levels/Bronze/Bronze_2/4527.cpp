// problem: Patterns and Pictures
// id: 4527
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
        int p, s, r, ss = 0;
        cin >> p;
        // vector<pair<int, int>> v(p);
        // for (auto &i : v)
        //     cin >> i.first >> i.second;
        for (int i = 0; i < p; i++)
        {
            cin >> s >> r;
            ss += s * r;
        }
        int y = 36 * 36;
        for (int i = 1; i <= 3; i++)
        {
            int t = y * i, mx = 0;
            cout << t / ss << ((i != 3) ? ' ' : '\n');
        }
    }

    return 0;
}