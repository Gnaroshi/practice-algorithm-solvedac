// problem: Nice Raises
// id: 25812
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, cnt = 0, t;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t != r)
        {
            if (t + r > t * 2)
                cnt++;
            else if (t + r < t * 2)
                cnt--;
        }
    }
    if (cnt > 0)
        cout << 1;
    else if (cnt < 0)
        cout << 2;
    else
        cout << 0;

    return 0;
}