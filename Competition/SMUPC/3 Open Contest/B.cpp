// problem: B번 - 우당탕탕 영화예매
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, cnt = 0, iter;
    cin >> n >> m >> k;
    iter = m - k + 1;
    string s, a = "";
    for (int i = 0; i < k; i++)
        a += '0';
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < iter; j++)
        {
            if (s.substr(j, k) == a)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}