// problem: 3 つの箱 (Three Boxes)
// id: 27325
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int iter = s.length(), cnt = 0, cur = 1;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'L')
        {
            if (cur != 1)
            {
                cur--;
            }
        }
        else
        {
            if (cur != 3)
            {
                cur++;
            }
        }
        if (cur == 3)
            cnt++;
    }
    cout << cnt;

    return 0;
}
