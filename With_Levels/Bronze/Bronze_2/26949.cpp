// problem: Kylskåpstransport
// id: 26949
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int pa, ka, pb, kb, n, ac = 0, bc = 0, a, b, mn = 0x3f3f3f3f;
    cin >> pa >> ka >> pb >> kb >> n;

    while (true)
    {
        int t = ac * ka;
        if (t > n)
            break;
        bc = 0;
        while (true)
        {
            if (t + bc * kb >= n)
            {
                if (mn > ac * pa + bc * pb)
                {
                    mn = ac * pa + bc * pb;
                    a = ac;
                    b = bc;
                }
            }
            if (t + bc * kb > n)
                break;
            bc++;
        }
        ac++;
        if (ac * ka > n)
            break;
    }
    cout << a << ' ' << b << ' ' << mn;

    return 0;
}