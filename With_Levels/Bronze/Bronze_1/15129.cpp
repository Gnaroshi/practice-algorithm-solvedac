// problem: Law 11
// id: 15129
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bx, by, axmx, dxc;
    vector<int> ax(11), ay(11), dx(11), dy(11);

    cin >> bx >> by;
    for (int i = 0; i < 11; i++)
        cin >> ax[i] >> ay[i];
    for (int i = 0; i < 11; i++)
        cin >> dx[i] >> dy[i];

    axmx = *max_element(ax.begin(), ax.end());
    sort(dx.begin(), dx.end(), greater<>());
    dxc = dx[1];
    if (axmx > bx && axmx > dxc && axmx > 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}