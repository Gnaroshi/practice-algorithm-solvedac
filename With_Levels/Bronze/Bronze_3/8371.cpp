// problem: Dyslexia
// id: 8371
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, ans = 0;
    string a, b;
    cin >> l >> a >> b;

    for (int i = 0; i < l; i++)
        if (a[i] != b[i])
            ans++;
    cout << ans;

    return 0;
}