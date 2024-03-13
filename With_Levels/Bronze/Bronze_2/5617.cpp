// problem: 問題 1
// id: 5617
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[4] = {0};
    while (true)
    {
        int n[3];
        for (int i = 0; i < 3; i++)
            cin >> n[i];
        sort(n, n + 3);
        if (n[2] >= n[0] + n[1])
            break;
        cnt[0]++;
        if (n[2] * n[2] == n[1] * n[1] + n[0] * n[0])
            cnt[1]++;
        else if (n[2] * n[2] < n[1] * n[1] + n[0] * n[0])
            cnt[2]++;
        else if (n[2] * n[2] > n[1] * n[1] + n[0] * n[0])
            cnt[3]++;
    }
    for (int i = 0; i < 4; i++)
        cout << cnt[i] << ' ';
    cout << '\n';

    return 0;
}