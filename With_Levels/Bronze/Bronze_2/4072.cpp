// problem: Words
// id: 4072
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
        if (s == "#")
            break;
        vector<string> v;
        stringstream st;
        st.str(s);
        while (st >> t)
            v.push_back(t);
        int iter = v.size();
        for (int i = 0; i < iter; i++)
        {
            reverse(v[i].begin(), v[i].end());
            cout << v[i] << ((i != iter - 1) ? " " : "\n");
        }
    }

    return 0;
}