// problem: Complexity
// id: 11608
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int al[26];
    fill(al, al + 26, 101);
    cin >> s;
    int iter = s.length(), cnt = 0, alc = 0;
    for (int i = 0; i < iter; i++)
    {
        if (al[s[i] - 'a'] == 101)
        {
            al[s[i] - 'a'] = 1;
            alc++;
        }
        else
            al[s[i] - 'a']++;
    }
    sort(al, al + 26);
    for (int i = 0; i < alc - 2; i++)
        cnt += al[i];
    cout << cnt;

    return 0;
}