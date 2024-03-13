// problem: Блокировка телефона
// id: 29666
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ps[8] = {"123", "456", "789", "147", "258", "369", "025", "058"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt[10] = {0}, iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        cnt[s[i] - '0']++;
        if (cnt[s[i] - '0'] >= 2)
        {
            cout << "Locked";
            return 0;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (s == ps[i])
        {
            cout << "Unlocked";
            return 0;
        }
    }
    cout << "Locked";

    return 0;
}