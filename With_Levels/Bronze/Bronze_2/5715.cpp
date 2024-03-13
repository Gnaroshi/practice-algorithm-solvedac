// problem: Jingle Composing
// id: 5715
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    while (true)
    {
        cin >> s;
        if (s == "*")
            break;
        int cnt = 0, iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '/')
                s[i] = ' ';
        }
        stringstream st;
        st.str(s);
        while (st >> t)
        {
            int tcnt = 0;
            for (auto i : t)
            {
                if (i == 'W')
                    tcnt += 64;
                else if (i == 'H')
                    tcnt += 32;
                else if (i == 'Q')
                    tcnt += 16;
                else if (i == 'E')
                    tcnt += 8;
                else if (i == 'S')
                    tcnt += 4;
                else if (i == 'T')
                    tcnt += 2;
                else if (i == 'X')
                    tcnt += 1;
            }
            if (tcnt == 64)
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}