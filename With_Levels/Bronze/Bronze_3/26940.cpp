// problem: Chokladkartongen
// id: 26940
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int bef, cur;
    int cnt = 0;
    cin >> bef;
    for (int i = 1; i < n; i++)
    {
        cin >> cur;
        if (cur > bef)
            cnt++;
        bef = cur;
    }
    cout << cnt;

    return 0;
}