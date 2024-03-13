// problem: 요다
// id: 5363
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
        string s, t, a[2];
        getline(cin, s);
        stringstream st;
        st.str(s);
        vector<string> v;
        while (st >> t)
            v.push_back(t);
        int cnt = 0;
        for (auto i : v)
        {
            if (cnt < 2)
            {
                a[cnt] = i;
                cnt++;
            }
            else
                cout << i << ' ';
        }
        cout << a[0] << ' ' << a[1] << '\n';
    }

    return 0;
}