// problem: 이교수님의 시험
// id: 10874
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, stc = 1;
    cin >> tc;
    while (tc--)
    {
        int t, ts = 0;
        for (int i = 1; i <= 10; i++)
        {
            cin >> t;
            if (t == (i - 1) % 5 + 1)
                ts++;
        }
        if (ts == 10)
            cout << stc << '\n';
        stc++;
    }

    return 0;
}