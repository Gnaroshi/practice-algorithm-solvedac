#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;

    while (tc--)
    {
        int r, c, wc, bc;
        cin >> r >> c;

        int bef_w, bef_b, st_r, st_c;
        int mn = abs(r - c);
        if (mm == 0)
        {
            st_r == st_c == 1;
        }
        else
        {
            st_r = mn + 1;
            st_c = 1
        }
        wc = bc = 0;
        while (true)
        {
            if ((st_r == r && st_c == c) || (st_r == r && st_c == c))
            {
                cout << wc << ' ' << bc << '\n';
                break;
            }
            int temp = r * c * 2 - c - r;
            wc += temp + 1;
            bc += temp;
            r--;
            c--;
        }
    }

    return 0;
}