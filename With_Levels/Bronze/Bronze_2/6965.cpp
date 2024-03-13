// problem: Censor
// id: 6965
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ast = "****";
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s, t;
        getline(cin, s);
        stringstream st;
        st.str(s);
        vector<string> v;
        while (st >> t)
            v.emplace_back(t);
        int iter = v.size();
        for (int i = 0; i < iter; i++)
        {
            cout << ((v[i].length() == 4) ? ast : v[i]);
            cout << ((i != iter - 1) ? " " : "\n");
        }
        cout << '\n';
    }

    return 0;
}