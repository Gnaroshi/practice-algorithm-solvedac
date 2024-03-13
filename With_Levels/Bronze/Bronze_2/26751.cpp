// problem: Najmniejsza liczba
// id: 26751
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3], cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
        if (n[i] == 0)
            cnt++;
    }
    sort(n, n + 3);

    cout << n[cnt];
    for (int i = 0; i < cnt; i++)
        cout << 0;
    for (int i = cnt + 1; i < 3; i++)
        cout << n[i];

    return 0;
}