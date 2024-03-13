// problem: 숨바꼭질 4
// id: 13913
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dst[100005], bef[100005];
int n, k, cur;
queue<int> q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    dst[n] = 1;
    bef[n] = n;
    q.push(n);
    while (!dst[k])
    {
        cur = q.front();
        q.pop();
        for (int nxt : {cur - 1, cur + 1, cur * 2})
        {
            if (nxt < 0 || nxt >= 100005)
                continue;
            if (dst[nxt])
                continue;
            bef[nxt] = cur;
            dst[nxt] = dst[cur] + 1;
            q.push(nxt);
        }
    }
    cout << dst[k] - 1 << '\n';
    vector<int> v;
    v.push_back(k);
    cur = k;
    while (cur != n)
    {
        v.push_back(bef[cur]);
        cur = bef[cur];
    }
    for (auto i = v.end() - 1; i != v.begin(); i--)
        cout << *i << ' ';
    cout << k;

    return 0;
}