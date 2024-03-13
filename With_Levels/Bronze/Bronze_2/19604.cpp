// problem: Art
// id: 19604
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bx = 100, by = 100, tx = 0, ty = 0, x, y;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == ',')
                s[i] = ' ';
        stringstream st;
        st.str(s);
        st >> x >> y;
        bx = min(bx, x);
        by = min(by, y);
        tx = max(tx, x);
        ty = max(ty, y);
    }
    cout << bx - 1 << ',' << by - 1 << '\n'
         << tx + 1 << ',' << ty + 1;

    return 0;
}