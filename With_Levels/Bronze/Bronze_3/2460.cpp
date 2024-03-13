#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    int max_ans = -1;
    int ans_loc = 0;
    for (int i = 0; i < 10; i++)
    {
        int pin, pout;
        cin >> pout >> pin;
        ans += pin;
        ans -= pout;
        if (max_ans < ans)
        {
            max_ans = ans;
            ans_loc = i;
        }
    }
    cout << max_ans << '\n';

    return 0;
}