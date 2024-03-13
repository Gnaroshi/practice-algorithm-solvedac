// problem: Diplomatic License
// id: 6553
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(6);
    string s;
    while (getline(cin, s))
    {
        stringstream st;
        st.str(s);
        int n;
        st >> n;
        vector<pair<double, double>> v(n);
        for (auto &i : v)
            st >> i.first >> i.second;
        v.push_back(v.front());
        cout << n;
        for (int i = 0; i < n; i++)
        {
            cout << ' ' << (v[i].first + v[i + 1].first) / 2 << ' ' << (v[i].second + v[i + 1].second) / 2;
        }
        cout << '\n';
    }

    return 0;
}