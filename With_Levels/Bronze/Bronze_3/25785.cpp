// problem: Easy-to-Pronounce Words
// id: 25785
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool cv(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    if (iter == 1)
    {
        cout << 1;
        return 0;
    }
    bool chk = true;
    int bef = (cv(s[0])) ? 1 : 0;
    for (int i = 1; i < iter; i++)
    {
        if (cv(s[i]) && bef == 0)
            bef = 1;
        else if (!cv(s[i]) && bef == 1)
            bef = 0;
        else
        {
            chk = false;
            break;
        }
    }

    cout << chk ? 1 : 0;

    return 0;
}