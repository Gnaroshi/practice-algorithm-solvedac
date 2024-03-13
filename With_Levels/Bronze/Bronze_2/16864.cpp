// problem: So You Like Your Food Hot?
// id: 16864
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool chk = true;
    int pt, p1, p2;
    int a, b;
    char c;
    cin >> a >> c >> b;
    pt = a * 100 + b;
    cin >> a >> c >> b;
    p1 = a * 100 + b;
    cin >> a >> c >> b;
    p2 = a * 100 + b;

    for (int i = 0;; i++)
    {
        if (i * p1 > pt)
            break;
        for (int j = 0;; j++)
        {
            if (i * p1 + j * p2 > pt)
                break;
            else if (i * p1 + j * p2 == pt)
            {
                chk = false;
                cout << i << ' ' << j << '\n';
            }
        }
    }

    if (chk)
        cout << "none";

    return 0;
}
