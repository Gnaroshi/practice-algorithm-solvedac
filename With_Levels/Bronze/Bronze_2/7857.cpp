// problem: Simple prefix compression
// id: 7857
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, ans = 0;
    string a, b;
    cin >> tc >> a;
    tc--;
    ans += a.length();
    while (tc--)
    {
        cin >> b;
        int t = b.length() + 1, iter = min(a.length(), b.length());
        for (int i = 0; i < iter; i++)
        {
            if (a[i] != b[i])
                break;
            t--;
        }
        ans += t;
        a = b;
    }
    cout << ans;

    return 0;
}