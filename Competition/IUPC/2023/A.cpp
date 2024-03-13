// problem: A번 - 모비스
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    int cnt[5] = {0};
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'M')
            cnt[0]++;
        else if (s[i] == 'O')
            cnt[1]++;
        else if (s[i] == 'B')
            cnt[2]++;
        else if (s[i] == 'I')
            cnt[3]++;
        else if (s[i] == 'S')
            cnt[4]++;
    }

    bool chk = true;
    for (int i = 0; i < 5; i++)
    {
        if (cnt[i] == 0)
        {
            chk = false;
            break;
        }
    }
    if (chk)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}