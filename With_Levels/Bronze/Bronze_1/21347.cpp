// problem: Keyboardd
// id: 21347
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    getline(cin, a);
    getline(cin, b);
    int ca[27] = {0}, cb[27] = {0};
    for (auto i : a)
    {
        if (isalpha(i))
            ca[i - 'a']++;
        else
            ca[26]++;
    }
    for (auto i : b)
    {
        if (isalpha(i))
            cb[i - 'a']++;
        else
            cb[26]++;
    }
    for (int i = 0; i < 13; i++)
    {
        if (ca[i] * 2 == cb[i] && cb[i])
            cout << char(i + 'a');
    }
    if (ca[26] * 2 == cb[26] && cb[26])
        cout << ' ';
    for (int i = 13; i < 26; i++)
    {
        if (ca[i] * 2 == cb[i] && cb[i])
            cout << char(i + 'a');
    }

    return 0;
}