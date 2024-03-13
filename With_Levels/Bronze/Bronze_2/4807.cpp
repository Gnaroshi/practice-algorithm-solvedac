// problem: Iterated Difference
// id: 4807
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    for (int tc = 1;; tc++)
    {
        cin >> n;
        if (!n)
            break;
        cout << "Case " << tc << ": ";
        vector<int> a(n), b(n);
        int ans = 0, t, iter = n - 1;
        for (auto &i : a)
            cin >> i;
        while (true)
        {
            bool chk = true;
            t = a.front();
            for (auto i : a)
            {
                if (i != t)
                {
                    chk = false;
                    break;
                }
            }
            if (chk)
            {
                cout << ans << " iterations\n";
                break;
            }
            for (int i = 0; i < iter; i++)
            {
                b[i] = abs(a[i] - a[i + 1]);
            }
            b[iter] = abs(a[iter] - a[0]);
            copy(b.begin(), b.end(), a.begin());
            ans++;
            if (ans > 1000)
            {
                cout << "not attained\n";
                break;
            }
        }
    }

    return 0;
}