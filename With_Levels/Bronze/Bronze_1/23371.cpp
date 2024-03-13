// problem: Histogram
// id: 23371
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, k, t, mx;
    cin >> n >> s >> k;
    int *cnt = new int[n];
    fill(cnt, cnt + n, 0);
    for (int i = 0; i < k; i++)
    {
        cin >> t;
        cnt[(t - 1) / s]++;
    }
    mx = *max_element(cnt, cnt + n);
    for (int i = mx; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (cnt[j] >= i)
                cout << '#';
            else
                cout << '.';
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '\n';

    return 0;
}