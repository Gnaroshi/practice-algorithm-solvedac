// problem: Copier
// id: 27685
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
        int n, iter;
        cin >> n;
        vector<int> v(n), ans;
        bool chk[100001] = {0};
        for (auto &i : v)
            cin >> i;
        for (auto i : v)
        {
            if (!chk[i])
                ans.push_back(i), chk[i] = 1;
        }
        iter = ans.size();
        for (int i = 0; i < iter; i++)
        {
            cout << ans[i] << (i != iter - 1 ? ' ' : '\n');
        }
    }

    return 0;
}