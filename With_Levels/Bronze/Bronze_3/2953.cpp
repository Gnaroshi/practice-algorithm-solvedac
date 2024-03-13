// problem: 나는 요리사다
// id: 2953
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, ml, mx = -1;
    for (int i = 0; i < 5; i++)
    {
        int s = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> t;
            s += t;
        }
        if (s > mx)
        {
            mx = s;
            ml = i;
        }
    }
    cout << ml + 1 << ' ' << mx;

    return 0;
}