// problem: C번 - 모스 부호
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
string al[26] = {".-", "-...",
                 "-.-.", "-..",
                 ".", "..-.",
                 "--.", "....",
                 "..", ".---",
                 "-.-", ".-..",
                 "--", "-.",
                 "---", ".--.",
                 "--.-", ".-.",
                 "...", "-",
                 "..-", "...-",
                 ".--", "-..-",
                 "-.--", "--.."};
string dg[10] = {
    "-----",
    ".----",
    "..---",
    "...--",
    "....-",
    ".....",
    "-....",
    "--...",
    "---..",
    "----.",
};
string etc[6] = {"--..--",
                 ".-.-.-",
                 "..--..",
                 "---...",
                 "-....-",
                 ".--.-."};
string etcc[6] = {",", ".", "?", ":", "-", "@"};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    bool chk;
    cin >> n;
    string s, ans = "";
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        chk = false;
        for (int j = 0; j < 26; j++)
        {
            if (s == al[j])
            {
                chk = true;
                ans += char(j + 'A');
                break;
            }
        }
        if (chk)
            continue;
        for (int j = 0; j < 10; j++)
        {
            if (s == dg[j])
            {
                chk = true;
                ans += char(j + '0');
                break;
            }
        }
        if (chk)
            continue;
        for (int j = 0; j < 6; j++)
        {
            if (s == etc[j])
            {
                ans += etcc[j];
                break;
            }
        }
    }
    cout << ans;

    return 0;
}
