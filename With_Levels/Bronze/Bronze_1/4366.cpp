// problem: Average Speed
// id: 4366
// time taken:
#include <bits/stdc++.h>
using namespace std;

double fn(string v)
{
    return ((v[0] - '0') * 10 + v[1] - '0') * 3600 + ((v[3] - '0') * 10 + v[4] - '0') * 60 + ((v[6] - '0') * 10 + v[7] - '0');
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    double ans = 0, spd = 0, ct = 0, nxt;
    cout << fixed;
    cout.precision(2);
    while (getline(cin, s))
    {
        stringstream st;
        st.str(s);
        vector<string> v;
        while (st >> t)
            v.emplace_back(t);
        nxt = fn(v[0]);
        ans += (nxt - ct) * spd;
        ct = nxt;
        if (v.size() == 1)
            cout << v[0] << ' ' << ans / 3600.0 << " km\n";
        else
            spd = stod(v[1]);
    }

    return 0;
}