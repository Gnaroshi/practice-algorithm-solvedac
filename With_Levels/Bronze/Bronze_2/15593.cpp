// problem: Lifeguards (Bronze)
// id: 15593
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mx = -1, t;
    int *s = (int *)malloc(sizeof(int) * n);
    int *e = (int *)malloc(sizeof(int) * n);
    int b[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> e[i];
        for (int j = s[i]; j < e[i]; j++)
            b[j]++;
    }

    for (int i = 0; i < n; i++)
    {
        t = 0;
        for (int j = s[i]; j < e[i]; j++)
            b[j]--;
        for (int j = 0; j < 1001; j++)
            if (b[j])
                t++;
        mx = max(mx, t);
        for (int j = s[i]; j < e[i]; j++)
            b[j]++;
    }
    cout << mx;

    return 0;
}