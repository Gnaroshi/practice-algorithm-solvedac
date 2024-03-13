// problem: Morse Code
// id: 9289
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ms[26] = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        string s, ans = "", t;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> t)
            ans += char((find(ms, ms + 26, t) - ms) + 'A');

        cout << "Case " << tcc << ": " << ans << '\n';
    }

    return 0;
}