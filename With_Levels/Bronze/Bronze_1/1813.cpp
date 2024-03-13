#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int truth[51];
    fill(truth, truth + 51, 0);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        truth[temp]++;
    }

    int ans = -1;
    for (int i = 0; i < 51; i++)
    {
        if (truth[i] == i)
            ans = i;
    }
    cout << ans << '\n';
    

    return 0;
}