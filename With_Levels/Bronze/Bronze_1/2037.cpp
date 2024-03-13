// problem: 문자메시지
// id: 2037
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
int psh[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, w, ans = 0;
    string s, t;
    cin >> p >> w;
    cin.ignore();
    getline(cin, s);
    int iter = s.length();
    char bef = s.front();
    ans += (p * psh[bef - 'A']);
    for (int i = 1; i < iter; i++)
    {
        if (!isalpha(s[i]))
        {
            bef = s[i];
            ans += p;
            continue;
        }
        if (bef != ' ')
            if (cnt[s[i] - 'A'] == cnt[bef - 'A'])
                ans += w;
        ans += (p * psh[s[i] - 'A']);
        bef = s[i];
    }
    cout << ans;

    return 0;
}