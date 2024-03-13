// problem: 통나무 건너뛰기
// id: 11497
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
        int n;
        cin >> n;
        int ans = -1;
        int *r = (int *)malloc(sizeof(int) * n);
        vector<int> o, h;
        for (int i = 0; i < n; i++)
            cin >> r[i];
        sort(r, r + n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                o.push_back(r[i]);
            else
                h.push_back(r[i]);
        }
        reverse(h.begin(), h.end());
        for (auto t : h)
            o.push_back(t);
        int iter = o.size();
        for (int i = 0; i < iter - 1; i++)
        {
            int t = abs(o[i] - o[i + 1]);
            if (ans < t)
                ans = t;
        }
        cout << ans << '\n';
    }

    return 0;
}