// problem: nmマス計算
// id: 22361
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (true)
    {
        cin >> n >> m;
        if (!n && !m)
            break;

        int *a = (int *)malloc(sizeof(int) * n);
        int *b = (int *)malloc(sizeof(int) * m);
        int cnt[10] = {0};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                string s = to_string(a[i] * b[j]);
                int iter = s.length();
                for (int k = 0; k < iter; k++)
                    cnt[s[k] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++)
            cout << cnt[i] << ' ';
        cout << '\n';
    }

    return 0;
}