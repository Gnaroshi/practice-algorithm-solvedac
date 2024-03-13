// problem: 노래 악보
// id: 1392
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, t;
    cin >> n >> q;
    int *sh = (int *)malloc(sizeof(int) * n);
    cin >> sh[0];
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        sh[i] = sh[i - 1] + t;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> t;
        for (int j = 0; j < n; j++)
        {
            if (t < sh[j])
            {
                cout << j + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}