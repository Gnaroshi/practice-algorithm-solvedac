// problem: Presidents
// id: 26562
// time taken:
#include <bits/stdc++.h>
using namespace std;

int v[26];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    v['F' - 'A'] = 100;
    v['G' - 'A'] = 50;
    v['J' - 'A'] = 20;
    v['H' - 'A'] = 10;
    v['L' - 'A'] = 5;
    v['W' - 'A'] = 1;

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        int ret = 0;
        string s, t;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> t)
        {
            ret += v[t[0] - 'A'];
        }
        cout << '$' << ret << '\n';
    }

    return 0;
}