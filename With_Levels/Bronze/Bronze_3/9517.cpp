// problem: 아이 러브 크로아티아
// id: 9517
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, bmb = 210, ans;
    cin >> k >> n;
    bool bh = true;
    for (int i = 0; i < n; i++)
    {
        int t;
        char c;
        cin >> t >> c;
        bmb -= t;
        if (k > 8)
            k -= 8;
        if (bmb <= 0 && bh)
        {
            ans = k;
            bh = false;
        }
        if (c == 'T')
        {
            k++;
        }
    }
    cout << ans;

    return 0;
}