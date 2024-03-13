// problem: 회문
// id: 14561
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string fn(ll a, ll n)
{
    string ret = "";
    ll t = a;
    while (t > 0)
    {
        ret += char(t % n + '0');
        t /= n;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, n;
        cin >> a >> n;
        string s = fn(a, n);
        bool chk = true;
        int iter = s.length();
        for (int i = 0; i < iter / 2; i++)
        {
            if (s[i] != s[iter - i - 1])
            {
                chk = false;
                break;
            }
        }
        cout << chk << '\n';
    }

    return 0;
}