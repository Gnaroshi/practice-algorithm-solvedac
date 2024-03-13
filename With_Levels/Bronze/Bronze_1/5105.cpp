// problem: Postman Joe
// id: 5105
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string fs, s;
        getline(cin, fs);
        if (fs == "#")
            break;
        stringstream st;
        st.str(fs);
        bool chk[21] = {0}, il = true;
        int cur = 0;
        st >> s;
        cur = stoi(s);
        chk[cur] = 1;
        while (st >> s)
        {
            if (s[0] == 'D')
            {
                cur -= s[1] - '0';
                if (cur < 1)
                {
                    il = false;
                    continue;
                }
                if (chk[cur])
                    il = false;
                else if (il)
                    chk[cur] = true;
            }
            else
            {
                cur += s[1] - '0';
                if (cur > 20)
                {
                    il = false;
                    continue;
                }
                if (chk[cur])
                    il = false;
                else if (il)
                    chk[cur] = true;
            }
        }

        if (il)
        {
            bool av = true;
            for (int i = 1; i <= 20; i++)
            {
                if (!chk[i])
                {
                    cout << i << ' ';
                    av = false;
                }
            }
            if (av)
                cout << "none";
            cout << '\n';
        }
        else
            cout << "illegal\n";
    }

    return 0;
}