#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
ll ans = 0;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        pq.push(temp);
    }

    while (!pq.empty())
    {
        int temp = pq.top();
        pq.pop();
        if (!pq.empty())
        {
            int min_num = pq.top();
            pq.pop();
            ans += temp + min_num;
            pq.push(min_num + temp);
        }
        // cout << "size: " << pq.size() << " temp: " << temp << " ans: " << ans << '\n';
    }
    cout << ans << '\n';

    return 0;
}