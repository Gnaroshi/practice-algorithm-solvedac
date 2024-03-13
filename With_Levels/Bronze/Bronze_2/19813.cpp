// problem: Dates
// id: 19813
// time taken:
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
        string s;
        string d[3];
        cin >> s;
        int iter = s.length();
        bool dos = true;
        for (int i = 0; i < iter; i++)
        {
            if (!isdigit(s[i]))
            {
                if (s[i] == '/')
                    dos = false;
                s[i] = ' ';
            }
        }
        stringstream st;
        st.str(s);
        for (int i = 0; i < 3; i++)
            st >> d[i];
        if (d[0].length() < 2)
            d[0].insert(0, "0");
        if (d[1].length() < 2)
            d[1].insert(0, "0");
        if (d[2].length() < 4)
        {
            string t = "0000";
            int d2l = d[2].length();
            t.replace(4 - d2l, d2l, d[2]);
            d[2] = t;
        }
        cout << d[!dos] << '.' << d[dos] << '.' << d[2] << ' ' << d[dos] << '/' << d[!dos] << '/' << d[2] << '\n';
    }

    return 0;
}