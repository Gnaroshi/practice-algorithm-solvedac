#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    long long ans = 0;
    int a_len = a.length();
    int b_len = b.length();

    for (int i = 0; i < a_len; i++)
    {
        for (int j = 0; j < b_len; j++)
        {
            ans += (a[i] - '0') * (b[j] - '0');
        }
    }

    cout << ans << '\n';

    return 0;
}
