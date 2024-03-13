// problem: Morton Numbers
// id: 9883
// time taken:
#include <bits/stdc++.h>
using namespace std;
string a, b, t;
int x, y;

string fn(int n)
{
    string ret = "";
    while (n > 0)
    {
        ret += char(n % 2 + '0');
        n /= 2;
    }
    int iter = 16 - ret.length();
    for (int i = 0; i < iter; i++)
        ret += '0';
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x >> y;
    a = fn(x), b = fn(y);

    for (int i = 0; i < 16; i++)
        t += b[i], t += a[i];
    long long ans = 0, r = 1;
    for (auto i : t)
    {
        ans += r * (i - '0');
        r *= 2;
    }
    cout << ans;

    return 0;
}