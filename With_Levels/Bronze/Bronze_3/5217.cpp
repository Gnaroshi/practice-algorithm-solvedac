// problem: 쌍의 합
// id: 5217
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
        cout << "Pairs for " << n << ":";
        vector<pair<int, int>> v;
        int iter = n / 2;
        for (int i = 1; i <= iter; i++)
        {
            if (n - i != i)
                v.push_back({i, n - i});
        }
        int cnt = v.size();
        for (int i = 0; i < cnt; i++)
        {
            cout << ' ' << v[i].first << ' ' << v[i].second;
            if (i < cnt - 1)
                cout << ",";
        }
        cout << '\n';
    }

    return 0;
}