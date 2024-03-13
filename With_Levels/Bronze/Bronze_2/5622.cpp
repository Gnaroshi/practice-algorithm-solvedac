// problem: 다이얼
// id: 5622
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string inp;
    cin >> inp;
    int ans = 0;
    int iter = inp.length();
    for (int i = 0; i < iter; i++)
    {
        int t = (inp[i] - 'A');
        if (t < 15)
            ans += int(t / 3) + 3;
        else
        {
            if (15 <= t && t <= 18)
                ans += 8;
            else if (19 <= t && t <= 21)
                ans += 9;
            else
                ans += 10;
        }
    }
    cout << ans;

    return 0;
}