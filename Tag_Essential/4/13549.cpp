#include <bits/stdc++.h>
using namespace std;

int n, k;
int t[200005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    fill(t, t + 100005, -1);
    t[n] = 0;

    queue<int> q;
    q.push(n);
    while (true)
    {
        int cur = q.front();
        q.pop();

        // cout << "cur: " << cur << '\n';
        if (cur == k)
            break;

        if (cur * 2 < 2000000)
        {
            if (t[cur * 2] == -1)
            {
                t[cur * 2] = t[cur];
                q.push(cur * 2);
            }
        }
        if (cur - 1 >= 0)
        {
            if (t[cur - 1] == -1)
            {
                t[cur - 1] = t[cur] + 1;
                q.push(cur - 1);
            }
        }
        if (cur + 1 < 2000000)
        {
            if (t[cur + 1] == -1)
            {
                t[cur + 1] = t[cur] + 1;
                q.push(cur + 1);
            }
        }
    }

    cout << t[k] << '\n';

    return 0;
}