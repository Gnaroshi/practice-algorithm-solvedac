// problem: 네 번째 수
// id: 2997
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    for (int i = 0; i < 3; i++)
        cin >> n[i];
    sort(n, n + 3);
    if (n[1] * 2 == n[0] + n[2])
        cout << n[2] + n[1] - n[0];
    else
    {
        if ((n[2] - n[1]) * 2 + n[0] == n[1])
            cout << n[0] + n[2] - n[1];
        else
            cout << n[2] - (n[1] - n[0]);
    }

    return 0;
}