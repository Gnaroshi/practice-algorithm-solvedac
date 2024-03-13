// problem: Box of Bricks
// id: 6318
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, set = 1;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << "Set #" << set++ << '\n';
        int s = 0, ans = 0;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
            s += i;
        }
        s /= n;
        for (auto i : v)
        {
            if (i > s)
                ans += i - s;
        }
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }

    return 0;
}