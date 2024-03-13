// problem: 분수좋아해?
// id: 10474
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a + b == 0)
            break;
        cout << a / b << ' ' << a % b << " / " << b << '\n';
    }

    return 0;
}