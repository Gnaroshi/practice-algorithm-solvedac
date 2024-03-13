// problem: Alien
// id: 7782
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int b1, b2;
    cin >> b1 >> b2;
    bool isL = false;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (!isL)
        {
            if (x1 <= b1 && x2 >= b1)
            {
                if (y1 <= b2 && y2 >= b2)
                {
                    isL = true;
                }
            }
        }
    }
    if (isL)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}