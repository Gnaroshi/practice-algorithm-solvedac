// problem: Pirates
// id: 15238
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter, mx = -1, l;
    string s;
    int a[26] = {0};
    cin >> n >> s;
    iter = s.length();
    for (int i = 0; i < iter; i++)
        a[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (mx < a[i])
        {
            mx = a[i];
            l = i;
        }
    }
    cout << char('a' + l) << ' ' << mx;

    return 0;
}