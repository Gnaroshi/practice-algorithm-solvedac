// problem: Angry Grammar Nazi
// id: 11158
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
        string s, t, bef;
        int ans = 0;
        getline(cin, s);
        stringstream st;
        st.str(s);
        st >> bef;
        if (bef == "u" || bef == "ur")
            ans++;
        else if (bef.find("lol") != string::npos)
            ans++;
        while (st >> t)
        {
            if (t == "u" || t == "ur")
                ans++;
            else if (t == "of")
            {
                if (bef == "would" || bef == "should")
                    ans++;
            }
            else if (t.find("lol") != string::npos)
                ans++;
            bef = t;
        }
        cout << ans * 10 << '\n';
    }

    return 0;
}