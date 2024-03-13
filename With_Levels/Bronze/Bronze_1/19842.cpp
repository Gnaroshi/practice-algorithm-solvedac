// problem: Restoring the Sequence
// id: 19842
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, cnt = 0, ans;
    cin >> n >> m;
    vector<int> v(m + 1);
    bool *chk = new bool[n + 1];
    bool isValid = true;
    fill(chk, chk + n + 1, 0);
    chk[0] = 1;
    v[0] = 0;
    for (int i = 1; i <= m; i++)
        cin >> v[i];
    for (int i = 1; i <= m; i++)
    {
        chk[v[i]] = 1;
        if (v[i] - v[i - 1] <= 0)
            isValid = false;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!chk[i])
        {
            cnt++;
            ans = i;
        }
    }
    if (cnt != 1)
        isValid = false;
    if (!isValid)
        cout << "No";
    else
    {
        cout << "Yes\n";
        cout << ans;
    }

    return 0;
}