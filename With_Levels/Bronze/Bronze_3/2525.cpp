// problem: 오븐 시계
// id: 2525
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int temp = a * 60 + b + c;
    int h = temp / 60;
    int m = temp % 60;
    while (true)
    {
        if (h >= 24)
        {
            h -= 24;
        }
        else
            break;
    }
    cout << h << ' ' << m;
    

    return 0;
}