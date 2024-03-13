#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int stairs[302];
    int scores[302];
    fill(stairs, stairs + 302, 0);
    fill(scores, scores + 302, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> stairs[i + 1];
    }

    scores[1] = stairs[1];
    scores[2] = stairs[1] + stairs[2];

    for (int i = 3; i <= n; i++)
    {
        scores[i] = max(scores[i - 2] + stairs[i], scores[i - 3] + stairs[i - 1] + stairs[i]);
    }

    cout << scores[n]
         << '\n';
    return 0;
}