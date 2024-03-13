// problem: Минимальная строка
// id: 28653
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, t = "";
    cin >> a >> b;
    int cnt[26] = {0}, l = a.length();
    for (auto i : a)
        cnt[i - 'a']++;
    for (auto i : b)
        cnt[i - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        int c = cnt[i];
        if (c)
        {
            for (int j = 0; j < c; j++)
                t += char('a' + i);
        }
        if (t.length() >= l)
            break;
    }
    cout << t.substr(0, l);

    return 0;
}