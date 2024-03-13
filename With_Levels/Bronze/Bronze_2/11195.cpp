// problem: Peragrams
// id: 11195
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int al[26] = {0};
    int iter = s.length(), cnt = 0;
    for (int i = 0; i < iter; i++)
        al[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        int t = al[i];
        if (t)
            cnt += t % 2;
    }
    cout << max(cnt - 1, 0);

    return 0;
}