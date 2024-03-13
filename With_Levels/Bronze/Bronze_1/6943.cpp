// problem: Slot Machines
// id: 6943
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, ans = 0, cur = 0;
    int sl[3], jp[3] = {35, 100, 10}, rd[3] = {30, 60, 9};
    cin >> a;
    for (int i = 0; i < 3; i++)
        cin >> sl[i];

    while (a)
    {
        sl[cur]++;
        if (sl[cur] == jp[cur])
        {
            sl[cur] = 0;
            a += rd[cur];
        }
        a--;
        ans++;
        cur++;
        cur %= 3;
    }

    cout << "Martha plays " << ans << " times before going broke.";

    return 0;
}