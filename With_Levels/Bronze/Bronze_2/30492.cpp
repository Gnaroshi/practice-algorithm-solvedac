// problem: Democratic Naming
// id: 30492
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < m; i++)
    {
        int cnt[26] = {0}, mx = -1, mxl = 0;
        for (auto s : v)
            cnt[s[i] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            if (mx < cnt[j])
            {
                mx = cnt[j];
                mxl = j;
            }
        }
        cout << char(mxl + 'a');
    }

    return 0;
}