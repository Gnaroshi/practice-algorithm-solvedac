// problem: Anti-Palindrome
// id: 30542
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool ispd(string s)
{
    int sl = s.length(), slh = sl / 2;
    for (int i = 0; i < slh; i++)
    {
        if (s[i] != s[sl - i - 1])
            return false;
    }
    return true;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, a = "";
    getline(cin, s);
    for (auto i : s)
    {
        if (isalpha(i))
            a += tolower(i);
    }
    int l = a.length();
    if (l < 2)
    {
        cout << "Palindrome";
        return 0;
    }
    for (int i = 2; i <= l; i++)
    {
        for (int j = 0; j <= l - i; j++)
        {
            if (ispd(a.substr(j, i)))
            {
                cout << "Palindrome";
                return 0;
            }
        }
    }
    cout << "Anti-palindrome";
    return 0;
}