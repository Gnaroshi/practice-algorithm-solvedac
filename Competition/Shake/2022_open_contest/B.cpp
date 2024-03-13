// problem: B번 - 지수를 더하자
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    int ans = 0;
    cin >> n;
    int *p = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    cin >> k;
    sort(p, p + n);
    for (int i = 1; i <= k; i++)
    {
        int t = i;
        for (int j = 0; j < n; j++)
        {
            if (t < p[j])
                break;
            if (i % p[j] == 0)
            {
                while (true)
                {
                    if (t % p[j] == 0)
                    {
                        ans++;
                        t /= p[j];
                    }
                    else
                        break;
                }
            }
        }
    }
    cout << ans;

    return 0;
}