#include <bits/stdc++.h>
using namespace std;

#define MX_N 1005

int n;
int ans;
int arr[MX_N];
int dist[MX_N];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                if (cnt < dist[j])
                    cnt = dist[j];
            }
        }
        dist[i] = cnt + 1;
        ans = max(ans, dist[i]);
    }

    for (int i = 0; i < n; i++)
        cout << dist[i] << ' ';
    cout << ans << '\n';

    return 0;
}