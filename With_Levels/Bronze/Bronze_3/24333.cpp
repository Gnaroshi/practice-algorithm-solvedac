// problem: СРЕЩА НА ПРИЯТЕЛИ
// id: 24334
// time taken:
#include <bits/stdc++.h>
using namespace std;
int ns[50005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, b1, a2, b2, k;
    cin >> a1 >> b1 >> a2 >> b2 >> k;
    int cnt = 0;
    for (int i = a1; i <= b1; i++)
        ns[i]++;
    for (int i = a2; i <= b2; i++)
        ns[i]++;
    int itf = min(a1, a2);
    int itb = max(b1, b2);
    for (int i = itf; i <= itb; i++)
    {
        if (ns[i] == 2 && i != k)
            cnt++;
    }
    cout << cnt;

    return 0;
}