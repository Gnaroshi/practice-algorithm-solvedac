// problem: Szyfr
// id: 8610
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt[26] = {0}, d;
    char c;
    string s;
    cin >> n >> c >> s;
    for (auto i : s)
        cnt[i - 'A']++;
    d = (max_element(cnt, cnt + 26) - cnt + 'A' - c);
    for (auto i : s)
    {
        cout << char((i - d + 26 - 'A') % 26 + 'A');
    }

    return 0;
}