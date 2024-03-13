// problem: 단어 뒤집기
// id: 9093
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
        vector<string> v;
        stringstream st;
        st.str(s);
        while (st >> t)
        {
            reverse(t.begin(), t.end());
            v.emplace_back(t);
        }
        int iter = v.size();
        for (int i = 0; i < iter; i++)
            cout << v[i] << (i != iter - 1 ? ' ' : '\n');
        }

    return 0;
}