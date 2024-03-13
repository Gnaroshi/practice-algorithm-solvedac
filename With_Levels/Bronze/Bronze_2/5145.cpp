// problem: Subway Fares
// id: 5145
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n;
        cin >> n;
        vector<int> v(n - 1);
        vector<string> st(n);
        string a, b;
        for (auto &i : v)
            cin >> i;
        for (auto &i : st)
            cin >> i;
        cin >> a >> b;
        int la = find(st.begin(), st.end(), a) - st.begin();
        int lb = find(st.begin(), st.end(), b) - st.begin();
        cout << v[abs(lb - la) - 1] << '\n';
        if (tcc < tc)
            cout << '\n';
    }

    return 0;
}