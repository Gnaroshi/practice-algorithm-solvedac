// problem: Tautogram
// id: 5698
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
        getline(cin, s);
        if (s == "*")
            break;
        stringstream st;
        st.str(s);
        bool chk = true;
        st >> t;
        char c = tolower(t[0]);
        while (st >> t)
        {
            if (tolower(t[0]) != c)
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? "Y\n" : "N\n");
    }

    return 0;
}