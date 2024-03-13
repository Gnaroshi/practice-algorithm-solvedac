// problem: 가지 교배
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n;
    char *eg = (char *)malloc(sizeof(char) * n + 1);
    for (int i = 1; i <= n; i++)
        cin >> eg[i];
    cin >> m >> k;
    bool chk = true;
    bool ans = false;
    for (int i = 0; i < m; i++)
    {
        chk = true;
        for (int j = 0; j < k; j++)
        {
            int t;
            cin >> t;
            if (eg[t] == 'P')
                chk = false;
        }
        if (chk)
            ans = true;
    }
    if (ans)
        cout << "W";
    else
        cout << "P";

    return 0;
}