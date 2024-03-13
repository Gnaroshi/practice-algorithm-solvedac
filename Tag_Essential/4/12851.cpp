#include <bits/stdc++.h>
using namespace std;

int n, k;
bool vist[200002];
int mn = 0x3f3f3f3f;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int t = 0;
    cin >> n >> k;
    if (n == k)
    {
        cout << "0\n1\n";
        return 0;
    }

    queue<int> q;
    q.push(n);
    vist[n] = true;
    while (!q.empty())
    {
        int q_size = q.size();
        for (int i = 0; i < q_size; i++)
        {
            int cur = q.front();
            q.pop();

            if (cur == k)
                ans++;
            vist[cur] = true;

            // if (cur == k)
            //     if (ans == 0)
            //     {
            //         mn = min(mn, vist[cur]);
            //         break;
            //     }

            if (cur + 1 <= 100001 && !vist[cur + 1])
                q.push(cur + 1);
            if (cur - 1 >= 0 && !vist[cur - 1])
                q.push(cur - 1);
            if (cur * 2 <= 100001 && !vist[cur * 2])
                q.push(cur * 2);
        }
        if (ans != 0)
            break;
        else
            t++;
    }

    cout << t << '\n'
         << ans << '\n';

    return 0;
}