// problem: 다오의 경주 대회
// id: 31067
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, bef, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    bool chk = true;
    bef = v.front();
    for (int i = 1; i < n; i++)
    {
        if (bef >= v[i])
        {
            if (bef >= v[i] + k)
            {
                chk = false;
                break;
            }
            v[i] += k;
            ans++;
        }
        bef = v[i];
    }
    if (!chk)
        cout << -1;
    else
        cout << ans;

    return 0;
}