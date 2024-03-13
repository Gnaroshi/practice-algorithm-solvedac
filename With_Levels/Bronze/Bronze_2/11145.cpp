// problem: Is it a Number?
// id: 11145
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
        bool chk = true;
        string s, t;
        vector<string> v;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> t)
            v.emplace_back(t);
        if (v.size() != 1)
            chk = false;
        else
        {
            t = v.front();
            for (auto c : t)
            {
                if (!isdigit(c))
                {
                    chk = false;
                    break;
                }
            }
        }
        if (chk)
        {
            int pos = 0;
            for (auto c : t)
            {
                if (c == '0')
                    pos++;
                else
                    break;
            }
            t = t.substr(pos, t.length() - pos);
            if (t == "" || t == "0")
                cout << "0\n";
            else
                cout << t << '\n';
        }
        else
            cout << "invalid input\n";
    }

    return 0;
}