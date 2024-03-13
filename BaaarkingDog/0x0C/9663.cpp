#include <bits/stdc++.h>
using namespace std;

#define MX 40

int n;
int ans = 0;
bool isUsed_row[MX];
bool isUsed_LR[MX];
bool isUsed_RL[MX];

void solv(int cnt)
{
    if (cnt == n)
    {
        ans++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isUsed_row[i] || isUsed_LR[cnt + i] || isUsed_RL[cnt - i + n - 1])
            continue;
        isUsed_row[i] = true;
        isUsed_LR[cnt + i] = true;
        isUsed_RL[cnt - i + n - 1] = true;
        solv(cnt + 1);
        isUsed_row[i] = false;
        isUsed_LR[cnt + i] = false;
        isUsed_RL[cnt - i + n - 1] = false;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    solv(0);

    cout << ans << '\n';

    return 0;
}