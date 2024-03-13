// problem: Count Me In
// id: 11319
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
    string vw = "aeiou";
    while (tc--)
    {
        string s;
        getline(cin, s);
        int t = 0, v = 0;
        for (auto i : s)
        {
            if (isalpha(i))
            {
                t++;
                if (vw.find(tolower(i)) != string::npos)
                    v++;
            }
        }
        cout << t - v << ' ' << v << '\n';
    }

    return 0;
}