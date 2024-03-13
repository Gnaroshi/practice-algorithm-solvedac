#include <bits/stdc++.h>
using namespace std;

int n, b, w;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> n >> b >> w;
    cin >> temp;
    int cnt_b = 0,
        cnt_w = 0;
    int i = 0,
        j = 0;
    int ans = -1;
    while (true)
    {
        if (j > n)
            break;

        if (cnt_b <= b && cnt_w >= w)
            if (j - i > ans)
                ans = j - i;
        if (cnt_b > b)
        {
            if (temp[i] == 'W')
                cnt_w--;
            else
                cnt_b--;
            i++;
        }
        else
        {
            if (temp[j] == 'W')
                cnt_w++;
            else
                cnt_b++;
            j++;
        }
    }
    if (ans == -1)
        cout << 0 << '\n';
    else
        cout << ans << '\n';

    return 0;
}