// problem: ПОДНИЗ
// id: 24375
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ca[26] = {0}, cb[26] = {0};
    string a, b;
    cin >> a >> b;
    for (auto i : a)
        ca[i - 'a']++;
    for (auto i : b)
        cb[i - 'a']++;
    string t = "";
    for (int i = 0; i < 26; i++)
    {
        int iter = min(ca[i], cb[i]);
        for (int j = 0; j < iter; j++)
            t += char('a' + i);
    }
    sort(t.begin(), t.end());
    cout << t;

    return 0;
}