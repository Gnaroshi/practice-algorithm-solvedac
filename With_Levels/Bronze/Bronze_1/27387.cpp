// problem: Ghost Leg
// id: 27387
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, t;

    cin >> n >> m;
    vector<int> v(m);
    for (auto &i : v)
        cin >> i;
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        t = i;
        for (auto j : v)
        {
            if (j == t)
                t--;
            else if (j == t + 1)
                t++;
        }
        cout << t + 1 << '\n';
    }

    return 0;
}