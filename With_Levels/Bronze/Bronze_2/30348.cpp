// problem: Telefonai
// id: 30348
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool fn1(int n)
{
    int t = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 != t)
            return false;
        n /= 10;
    }
    return true;
}

bool fn2(int n)
{
    string s = to_string(n);
    char bef = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (bef >= s[i])
            return false;
        bef = s[i];
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, ans = 0x3f3f3f3f;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (fn1(k) || fn2(k))
        {
            if (k < ans)
                ans = k;
        }
    }
    if (ans == 0x3f3f3f3f)
        cout << "NERASTA";
    else
        cout << ans;

    return 0;
}