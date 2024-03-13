// problem: Casting Out Nines
// id: 4927
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(string s)
{
    int ret = 0;
    for (auto i : s)
        ret += (i - '0');
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcc = 1, iter;
    int ha, hb, hc;
    string a, b, c, s;
    bool chk, hchk;

    while (true)
    {
        getline(cin, s);
        if (s == ".")
            break;
        iter = s.length();
        chk = false;
        hchk = true;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '*')
            {
                chk = true;
                s[i] = ' ';
            }
            else if (!isdigit(s[i]))
                s[i] = ' ';
        }
        stringstream st;
        st.str(s);
        st >> a >> b >> c;
        ha = fn(a);
        hb = fn(b);
        hc = fn(c) % 9;
        if (chk)
            ha = (ha * hb) % 9;
        else
            ha = (ha + hb) % 9;
        if (ha != hc)
            hchk = false;
        cout << tcc++ << ". " << (hchk ? "PASS\n" : "NOT!\n");
    }

    return 0;
}