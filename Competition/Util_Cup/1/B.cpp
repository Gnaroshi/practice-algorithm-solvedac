// problem: B번 - Gift Expire Date
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string c, t;
    int cnt = 0, n, y, m, d;
    cin >> c >> n;
    for (int i = 0; i < c.length(); i++)
        if (c[i] == '-')
            c[i] = ' ';
    stringstream st;
    st.str(c);
    st >> y >> m >> d;
    while (n--)
    {
        cin >> t;
        for (int i = 0; i < t.length(); i++)
            if (t[i] == '-')
                t[i] = ' ';
        int yy, mm, dd;
        stringstream st;
        st.str(t);
        st >> yy >> mm >> dd;
        if (y < yy)
            cnt++;
        else if (y == yy)
        {
            if (m < mm)
                cnt++;
            else if (m == mm)
            {
                if (d <= dd)
                    cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}