// problem: Fridge
// id: 13525
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt[10] = {0}, mn = 1;
    for (auto i : s)
        cnt[i - '0']++;

    for (int i = 0; i < 10; i++)
    {
        if (cnt[i] < cnt[mn])
            mn = i;
    }

    if (mn == 0)
        cout << 1;

    for (int i = 0; i <= cnt[mn]; i++)
        cout << mn;

    return 0;
}