// problem: Multiple Choice
// id: 6784
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    char *st = (char *)malloc(sizeof(char) * n);
    char t;
    for (int i = 0; i < n; i++)
        cin >> st[i];
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == st[i])
            ans++;
    }
    cout << ans;

    return 0;
}