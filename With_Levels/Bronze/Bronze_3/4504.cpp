// problem: 배수 찾기
// id: 4504
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    while (true)
    {
        cin >> t;
        if (!t)
            break;
        if (t % n == 0)
            cout << t << " is a multiple of " << n << ".\n";
        else
            cout << t << " is NOT a multiple of " << n << ".\n";
    }

    return 0;
}