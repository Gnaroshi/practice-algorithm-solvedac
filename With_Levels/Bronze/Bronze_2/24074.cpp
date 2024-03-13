// problem: 分割 (Split)
// id: 24074
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = -1, loc = 0, c = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        if (mx < i)
        {
            mx = i;
            loc = c;
        }
        c++;
    }
    int f = 0, b = 0;
    for (int i = 0; i < loc; i++)
        f += v[i];
    for (int i = loc + 1; i < n; i++)
        b += v[i];
    cout << f << '\n' << b;

    return 0;
}