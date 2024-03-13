// problem: F번 - 🍎📦 '사과상자'에 들어있는 것은 무엇? 현금?
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bx = 0, pr = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char t;
        int w, h, l, c;
        cin >> t >> w >> h >> l;
        if (t == 'A')
        {
            c = (w / 12) * (h / 12) * (l / 12);
            bx += c * 500 + 1000;
            pr += 4000 * c;
        }
        else
        {
            bx += 6000;
        }
    }
    cout << bx << '\n'
         << pr;

    return 0;
}