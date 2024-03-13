// problem: 최댓값
// id: 2566
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mx = -1;
    int mxx = -1;
    int mxy = -1;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int a;
            cin >> a;
            if (a > mx)
            {
                mx = a;
                mxx = i;
                mxy = j;
            }
        }
    }
    cout << mx << '\n'
         << mxx + 1 << ' ' << mxy + 1;

    return 0;
}