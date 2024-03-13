// problem: Volleybollmatchen
// id: 20840
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n, ca, cb, a, b;
string s;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> s;
    for (auto i : s)
    {
        if (i == 'A')
            a++;
        else
            b++;
        if (ca == cb && ca == 1)
        {
            if (abs(a - b) > 1 && (a >= 15 || b >= 15))
            {
                if (a > b)
                    ca++;
                else
                    cb++;
                a = b = 0;
            }
        }
        else if (abs(a - b) > 1 && (a >= 25 || b >= 25))
        {
            if (a > b)
                ca++;
            else
                cb++;
            a = b = 0;
        }
    }
    cout << ca << ' ' << cb;

    return 0;
}