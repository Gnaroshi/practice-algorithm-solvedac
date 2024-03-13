// problem: Reverse Words (Large)
// id: 12606
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
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        string s, w;
        vector<string> v;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> w)
            v.emplace_back(w);
        reverse(v.begin(), v.end());
        int iter = v.size();
        for (int i = 0; i < iter; i++)
            cout << v[i] << ((i != iter - 1) ? ' ' : '\n');
    }

    return 0;
}