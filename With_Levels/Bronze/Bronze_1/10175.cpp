// problem: Dominant Species
// id: 10175
// time taken:
#include <bits/stdc++.h>
using namespace std;

int v[26];
string s[26];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    v['B' - 'A'] = 2;
    v['C' - 'A'] = 1;
    v['M' - 'A'] = 4;
    v['W' - 'A'] = 3;
    s['B' - 'A'] = "Bobcat";
    s['C' - 'A'] = "Coyote";
    s['M' - 'A'] = "Mountain Lion";
    s['W' - 'A'] = "Wolf";

    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        int cnt[26] = {0}, mx = 0, chk = 0, l;
        for (auto i : b)
            cnt[i - 'A'] += v[i - 'A'];
        mx = *max_element(cnt, cnt + 26);
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] == mx)
                chk++, l = i;
        }
        cout << a << ": ";
        if (chk != 1)
            cout << "There is no dominant species\n";
        else
            cout << "The " << s[l] << " is the dominant species\n";
    }

    return 0;
}