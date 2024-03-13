// problem: Drop The Byte!
// id: 17949
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    int n, iter;
    ll ret, m;
    cin >> s >> n;
    iter = s.length();
    for (int i = 0; i < iter;)
    {
        cin >> t;
        ret = 0;
        m = 1;
        if (t[0] == 'c')
        {
            t = s.substr(i, 2);
            i += 2;
        }
        else if (t[0] == 'i')
        {
            t = s.substr(i, 8);
            i += 8;
        }
        else
        {
            t = s.substr(i, 16);
            i += 16;
        }
        reverse(t.begin(), t.end());
        for (auto i : t)
        {
            if (isalpha(i))
                ret += m * (i - 'a' + 10);
            else
                ret += m * (i - '0');
            m *= 16;
        }
        cout << ret << ' ';
    }

    return 0;
}