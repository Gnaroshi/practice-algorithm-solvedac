// problem: B번 - 아침 태권도
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    bool z[4] = {0};
    set<double> st1;
    set<double> st2;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        if (x == 0)
        {
            if (y > 0)
                z[0] = 1;
            else
                z[1] = 1;
        }
        else if (y == 0)
        {
            if (x > 0)
                z[2] = 1;
            else
                z[3] = 1;
        }
        else
        {
            if ((x < 0 && y < 0) || (x > 0 && y < 0))
                st1.insert(y / x);
            else
                st2.insert(y / x);
        }
    }

    cnt = st1.size() + st2.size();
    for (int i = 0; i < 4; i++)
        cnt += z[i];
    cout << cnt;

    return 0;
}