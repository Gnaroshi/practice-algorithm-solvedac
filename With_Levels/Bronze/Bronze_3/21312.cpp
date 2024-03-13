// problem: 홀짝 칵테일
// id: 21312
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    int oe[3] = {0};
    int cnt = 0;
    int ans = 1;
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
        if (n[i] % 2 == 1)
        {
            oe[i] = 1;
            cnt++;
        }
    }
    for (int i = 0; i < 3; i++)
        ans *= n[i];
    if (cnt != 0)
    {
        int odmx = 1;
        for (int i = 0; i < 3; i++)
        {
            if (oe[i])
                odmx *= n[i];
        }
        cout << odmx;
    }
    else
        cout << ans;

    return 0;
}