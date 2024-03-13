// problem: Circular Sequence
// id: 8965
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s;
        set<string> dna;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            t = "";
            t += s[iter - 1];
            t += s.substr(0, iter - 1);
            dna.insert(t);
            s = t;
        }
        cout << *dna.begin() << '\n';
    }

    return 0;
}