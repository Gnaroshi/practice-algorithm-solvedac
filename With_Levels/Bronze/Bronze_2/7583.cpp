// problem: Jumbled Words
// id: 7583
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t, r;
    while (true)
    {
        getline(cin, s);
        if (s == "#")
            break;
        int spc = 0, iter = s.length();
        for (int i = 0; i < iter; i++)
            if (s[i] == ' ')
                spc++;

        stringstream st;
        st.str(s);
        spc++;
        for (int i = 0; i < spc; i++)
        {
            st >> t;
            if (t.length() <= 3)
                cout << t;
            else
            {
                r = t.substr(1, t.length() - 2);
                reverse(r.begin(), r.end());
                cout << t[0] << r << t[t.length() - 1];
            }
            if (i != spc - 1)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}