// problem: A Colorful Problem
// id: 20377
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> r(16), g(16), b(16);
    for (int i = 0; i < 16; i++)
        cin >> r[i] >> g[i] >> b[i];
    cin.ignore();
    string s;
    while (getline(cin, s))
    {
        stringstream st;
        st.str(s);
        int tr, tg, tb, mn = 0x3f3f3f3f, ans = 0;
        st >> tr >> tg >> tb;
        for (int i = 0; i < 16; i++)
        {
            int t = (r[i] - tr) * (r[i] - tr) + (g[i] - tg) * (g[i] - tg) + (b[i] - tb) * (b[i] - tb);
            if (mn > t)
            {
                ans = i;
                mn = t;
            }
        }
        cout << setw(3) << tr << ' ' << setw(3) << tg << ' ' << setw(3) << tb << ' ';
        cout << "maps to ";
        cout << setw(3) << r[ans] << ' ' << setw(3) << g[ans] << ' ' << setw(3) << b[ans] << '\n';
    }
    return 0;
}