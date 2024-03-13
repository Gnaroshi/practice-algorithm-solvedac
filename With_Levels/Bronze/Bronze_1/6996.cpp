// problem: 애너그램
// id: 6996
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
        string a, b;
        cin >> a >> b;
        int ca[26] = {0}, cb[26] = {0};
        for (auto i : a)
            ca[i - 'a']++;
        for (auto i : b)
            cb[i - 'a']++;
        bool chk = false;
        for (int i = 0; i < 26; i++)
        {
            if (ca[i] != cb[i])
            {
                chk = true;
                break;
            }
        }
        cout << a << " & " << b << " are";
        if (chk)
            cout << " NOT";
        cout << " anagrams.\n";
    }

    return 0;
}