// problem: 4번째 점
// id: 1894
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(3);
    vector<pair<double, double>> v(4);
    string s;
    while (getline(cin, s))
    {
        int a, b, c = -1, d = -1;
        stringstream st;
        st.str(s);
        for (int i = 0; i < 4; i++)
            st >> v[i].first >> v[i].second;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (v[i].first == v[j].first && v[i].second == v[j].second)
                    a = i, b = j;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (c == -1)
            {
                if (i != a && i != b)
                    c = i;
            }
            else if (i != a && i != b)
                d = i;
        }
        double mx = (v[c].first + v[d].first);
        double my = (v[c].second + v[d].second);
        cout << mx - v[a].first << ' ' << my - v[a].second << '\n';
    }

    return 0;
}