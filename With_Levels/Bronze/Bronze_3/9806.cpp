// problem: The King
// id: 9806
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, ans = 0;
    cin >> n >> p;
    int *s = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    if (p % 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] > 0)
                ans += pow(s[i], p);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
            ans += pow(s[i], p);
    }
    cout << ans;

    return 0;
}