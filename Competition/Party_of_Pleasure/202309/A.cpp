// problem: A번 - 아즈버의 이빨 자국
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 4005;
bool chk[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx;
    cin >> n;
    vector<int> ans, v(n);
    for (auto &i : v)
        cin >> i;
    mx = n / 2;
    for (int i = 1; i <= mx; i++)
    {
        int iter = n - i;
        int dif = v[i] - v[0];
        fill(chk, chk + MX, 0);
        bool isA = true;
        chk[i] = chk[0] = 1;
        for (int j = 1; j < iter; j++)
        {
            if (v[j + i] - v[j] == dif)
                chk[j + i] = chk[j] = 1;
        }
        for (int j = 0; j < n; j++)
        {
            if (!chk[j])
            {
                isA = false;
                break;
            }
        }
        if (isA)
            ans.push_back(dif);
    }
    cout << ans.size() << '\n';
    if (!ans.empty())
    {
        for (auto i : ans)
            cout << i << ' ';
    }

    return 0;
}