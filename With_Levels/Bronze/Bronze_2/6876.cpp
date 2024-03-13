// problem: Snow Calls
// id: 6876
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
        string st, s = "";
        cin >> st;
        int loc = 0;
        int iter = st.length();
        for (int i = 0; i < iter; i++)
        {
            if (st[i] == '-')
                continue;
            s.push_back(st[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            if (isalpha(s[i]))
            {
                int t = s[i] - 'A';
                if (t < 3)
                    s[i] = '2';
                else if (t < 6)
                    s[i] = '3';
                else if (t < 9)
                    s[i] = '4';
                else if (t < 12)
                    s[i] = '5';
                else if (t < 15)
                    s[i] = '6';
                else if (t < 19)
                    s[i] = '7';
                else if (t < 22)
                    s[i] = '8';
                else
                    s[i] = '9';
            }
        }
        for (int i = 0; i < 10; i++)
        {
            cout << s[i];
            if (i == 2 || i == 5)
                cout << '-';
        }
        cout << '\n';
    }

    return 0;
}