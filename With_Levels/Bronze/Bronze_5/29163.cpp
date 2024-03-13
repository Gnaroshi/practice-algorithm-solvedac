// problem: Счастье Мистера Бина
// id: 29163
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, cnt[2] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cnt[t % 2]++;
    }
    cout << ((cnt[0] > cnt[1]) ? "Happy" : "Sad");

    return 0;
}