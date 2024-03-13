// problem: 수학적 호기심
// id: 9094
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int tc, ans;
    cin >> tc;
    while (tc--)
    {
        ans = 0;
        cin >> n >> m;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((i * i + j * j + m) % (i * j) == 0)
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}