// problem: Даты
// id: 29585
// time taken:
#include <bits/stdc++.h>
using namespace std;

int mth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int k, t, fy, fm, fd, tay, tam, tad, ans;
string s;

bool an[10];

void gd(int *y, int *m, int *d)
{
    cin >> s;
    stringstream st;
    for (auto &j : s)
    {
        if (j == '.')
            j = ' ';
    }
    st.str(s);
    st >> *d >> *m >> *y;
    return;
}

bool chk(int y, int m, int d)
{
    string t = to_string(y) + to_string(m) + to_string(d);
    if (m < 10 || d < 10 || y < 1000)
        t += '0';
    for (auto i : t)
    {
        if (!an[i - '0'])
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> t;
        an[t] = 1;
    }
    gd(&fy, &fm, &fd);
    gd(&tay, &tam, &tad);
    ans += chk(fy, fm, fd);
    if (fy > tay || (fy == tay && fm > tam) ||
        (fy == tay && fm == tam && fd > tad) ||
        (fy == tay && fm == tam && fd == tad))
    {
        cout << ans;
        return 0;
    }

    while (true)
    {
        if (fy % 4 == 0 && ((fy % 100) || (fy % 400 == 0)))
            mth[2] = 29;
        else
            mth[2] = 28;
        fd++;
        if (fd > mth[fm])
        {
            fm++;
            fd = 1;
        }
        if (fm > 12)
        {
            fy++;
            fm = 1;
        }
        ans += chk(fy, fm, fd);

        if (fy == tay && fm == tam && fd == tad)
            break;
    }
    cout << ans << '\n';

    return 0;
}