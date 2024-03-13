// problem: A simple task
// id: 20359
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int p = 0;
    int t = n;
    int pr = 1;
    while (true)
    {
        if (t % 2 == 1)
            break;
        t /= 2;
        p++;
        pr *= 2;
    }
    cout << n / pr << ' ' << p;

    return 0;
}