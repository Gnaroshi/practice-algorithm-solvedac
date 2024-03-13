// problem: 2진수 8진수
// id: 1373
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t, o = "";
    cin >> s;
    int iter = s.length();
    reverse(s.begin(), s.end());
    for (int i = 0; i < iter; i += 3)
    {
        int oc = 0, m = 1;
        t = s.substr(i, min(3, iter - i));
        for (auto k : t)
        {
            oc += m * (k - '0');
            m *= 2;
        }
        o.append(to_string(oc));
    }
    reverse(o.begin(), o.end());
    cout << o;

    return 0;
}