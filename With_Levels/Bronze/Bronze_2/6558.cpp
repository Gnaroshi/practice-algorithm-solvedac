// problem: Average is not Fast Enough!
// id: 6558
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    double d;
    cin >> n >> d;
    cin.ignore();
    string s;
    while (getline(cin, s))
    {
        int t, h1, m1, s1, sec = 0;
        int iter = s.length();
        bool chk = false;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '-')
                chk = true;
            else if (s[i] == ':')
                s[i] = ' ';
        }
        stringstream st;
        st.str(s);
        st >> t;
        printf("%3d:", t);
        if (chk)
        {
            printf(" -\n");
            continue;
        }
        while (st >> h1 >> m1 >> s1)
            sec += s1 + m1 * 60 + h1 * 3600;
        int tr = round((double)sec / d);
        printf("%2d:%02d min/km\n", tr / 60, tr % 60);
    }

    return 0;
}
