// problem: 고장난 시계
// id: 14710
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    bool fnd = true;
    cin >> a >> b;
    if (a % 30 * 12 == b)
        cout << "O";
    else
        cout << "X";
    return 0;
}