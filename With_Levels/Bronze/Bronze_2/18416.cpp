// problem: 最長昇順連続部分列 (Longest Ascending Contiguous Subsequence)
// id: 18416
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 1;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        int bef = v[i], tc = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < bef)
                break;
            tc++;
            bef = v[j];
        }
        mx = max(mx, tc);
    }
    cout << mx;

    return 0;
}