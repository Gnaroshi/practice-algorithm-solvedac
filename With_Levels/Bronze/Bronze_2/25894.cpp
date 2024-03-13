// problem: Phoneme Palindromes
// id: 25894
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
        cout << "Test case #" << tcc << ":\n";
        int n, q;
        cin >> n;
        vector<pair<char, char>> v;
        char a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.push_back({a, b});
            v.push_back({b, a});
        }
        cin >> q;

        string s;
        while (q--)
        {
            cin >> s;
            int iter = s.length() / 2, si = s.length();
            bool chk = true;
            for (int i = 0; i < iter; i++)
            {
                if (s[i] != s[si - i - 1])
                {
                    chk = false;
                    for (auto j : v)
                    {
                        if (j.first == s[i] && j.second == s[si - i - 1])
                        {
                            chk = true;
                            break;
                        }
                    }
                }
                if (!chk)
                    break;
            }
            cout << s << ' ' << (chk ? "YES\n" : "NO\n");
        }
        if (tcc < tc)
            cout << '\n';
    }

    return 0;
}