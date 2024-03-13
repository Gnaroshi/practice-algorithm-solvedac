// problem: Richard Hamming
// id: 13456
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
        int n, cnt = 0, v;
        cin >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            a.emplace_back(v);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            b.emplace_back(v);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}