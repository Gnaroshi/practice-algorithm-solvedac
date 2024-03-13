// problem: 재귀의 귀재
// id: 25501
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

int isPalindrome(string s)
{
    bool chk = true;
    int iter = s.length();
    for (int i = 0; i < iter / 2; i++)
    {
        if (s[i] != s[iter - i - 1])
        {
            chk = false;
            break;
        }
        cnt++;
    }
    return chk;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    string s;
    while (tc--)
    {
        cin >> s;
        cnt = 1;
        cout << isPalindrome(s);
        cout << ' ' << cnt << '\n';
    }

    return 0;
}