// problem: Decode the Message
// id: 11149
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s, t;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> t)
        {
            int cnt = 0;
            for (auto i : t)
                cnt += i - 'a';
            cnt %= 27;
            if (cnt == 26)
                cout << ' ';
            else
                cout << char('a' + cnt);
        }
        cout << '\n';
    }

    return 0;
}