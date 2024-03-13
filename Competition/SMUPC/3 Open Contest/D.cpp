// problem: D번 - 이상한 호텔의 송이
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll bs[61];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    for (int i = 0; i < 62; i++)
    {
        bs[i] = t;
        t *= 2;
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, a = 61, b, t;
        cin >> n;
        while (true)
        {
            if (n >= bs[a])
                break;
            a--;
        }
        vector<string> s;
        string ts;
        while (a > -1)
        {
            ts = "";
            t = n - bs[a] + 1;
            ts += to_string(a + 1);
            int iter = 18 - to_string(t).length();
            for (int i = 0; i < iter; i++)
                ts += '0';
            ts += to_string(t);
            s.emplace_back(ts);
            a--;
            n /= 2;
        }
        for (auto i : s)
            cout << i << '\n';
    }

    return 0;
}

// 1000000000000000000
// 210000000000000770414
