// problem: Koncertas
// id: 30064
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, cur = 1;
    cin >> n;
    vector<int> v(n + 1);
    v[0] = -1;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    if (v[1] != 0)
    {
        while (true)
        {
            cur = v[cur];
            if (cur == 0)
                break;
            else if (cur == -1)
                cur = v.back();
            cnt++;
        }
    }
    cout << cnt << "\n";

    return 0;
}