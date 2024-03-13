// problem: No Duplicates
// id: 15098
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    getline(cin, s);
    stringstream st;
    st.str(s);
    set<string> sen;
    bool chk = true;
    while (st >> t)
    {
        if (sen.find(t) != sen.end())
            chk = false;
        sen.insert(t);
    }
    cout << (chk ? "yes" : "no");

    return 0;
}