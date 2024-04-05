// problem: Вендомат
// id: 26059
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

pair<int, int> fn(string s)
{
    int ra, rb;
    stringstream st;
    for (auto &i : s)
    {
        if (i == ',')
        {
            i = ' ';
            break;
        }
    }
    st.str(s);
    st >> ra >> rb;
    return {ra, rb};
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, ta, tb, mx = -1, c;
    string r, t, ansr = "-1";
    cin >> n >> t;
    tie(a, b) = fn(t);

    for (int i = 0; i < n; i++)
    {
        cin >> r >> t;
        tie(ta, tb) = fn(t);
        c = ta * 100 + tb;
        if (mx < c && ta <= a && tb <= b)
        {
            ansr = r;
            mx = c;
        }
    }
    cout << ansr << '\n';

    return 0;
}