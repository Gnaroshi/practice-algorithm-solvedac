// problem: 단어순서 뒤집기
// id: 12605
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
        string s;
        getline(cin, s);
        stringstream st;
        st.str(s);
        vector<string> v;
        while (st >> s)
            v.emplace_back(s);
        cout << "Case #" << tcc << ": ";
        reverse(v.begin(), v.end());
        int iter = v.size();
        for (int i = 0; i < iter; i++)
        {
            cout << v[i];
            if (i != iter - 1)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}