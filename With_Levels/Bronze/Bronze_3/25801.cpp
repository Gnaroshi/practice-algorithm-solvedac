// problem: Odd/Even Strings
// id: 25801
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int cnt[26] = {0};
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        cnt[s[i] - 'a']++;
    bool isOd = true;
    bool isEv = true;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            if (cnt[i] % 2 == 1)
                isEv = false;
            else
                isOd = false;
        }
    }

    if ((isOd && isEv) || (!isOd && !isEv))
        cout << "0/1";
    else if (isOd)
        cout << "1";
    else
        cout << "0";

    return 0;
}
