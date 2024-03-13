// problem: Cooking Water
// id: 17924
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    int cnt[1001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            cnt[j]++;
        }
    }
    for (int i = 0; i < 1001; i++)
    {
        if (cnt[i] == n)
        {
            cout << "gunilla has a point";
            return 0;
        }
    }
    cout << "edward is right";

    return 0;
}