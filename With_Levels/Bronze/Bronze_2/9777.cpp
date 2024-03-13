// problem: Birthday Statistics
// id: 9777
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m[13] = {0};
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        int iter = s.length();
        for (int i = 0; i < iter; i++)
            if (s[i] == '/')
                s[i] = ' ';
        stringstream st;
        st.str(s);
        int info[4];
        for (int i = 0; i < 4; i++)
            st >> info[i];
        m[info[2]]++;
    }
    for (int i = 1; i <= 12; i++)
        cout << i << ' ' << m[i] << '\n';
    return 0;
}