// problem: Шахматная доска
// id: 21649
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;
    if (m % 2 == 0 || n % 2 == 0)
        cout << "equal";
    else
        cout << (((a + b + c) % 2) ? "white" : "black");

    return 0;
}