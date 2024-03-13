// problem: 스네이크
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if (n % 2 == 1 && m % 2 == 1)
    {
        cout << m * n - 1;
    }
    else
        cout << n * m;

    return 0;
}