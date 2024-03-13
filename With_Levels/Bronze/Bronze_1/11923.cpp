// problem: PUTOVANJE
// id: 11923
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, mx = 0, cur, tc;
    cin >> n >> c;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        tc = cur = 0;
        for (int j = i; j < n; j++)
        {
            if (cur + v[j] < c)
            {
                cur += v[j];
                tc++;
            }
            else if (cur + v[j] == c)
            {
                tc++;
                break;
            }
        }
        mx = max(mx, tc);
    }
    cout << mx;

    return 0;
}