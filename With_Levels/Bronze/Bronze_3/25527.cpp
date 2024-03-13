// problem: Counting Peaks of Infection
// id: 25527
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int cnt = 0;
        int *b = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 1; i < n - 1; i++)
            if (b[i - 1] < b[i] && b[i + 1] < b[i])
                cnt++;
        cout << cnt << '\n';
    }

    return 0;
}