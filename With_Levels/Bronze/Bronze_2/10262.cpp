// problem: 주사위 게임
// id: 10262
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g = 0, t;
    for (int i = 0; i < 4; i++)
        cin >> t, g += t;
    for (int i = 0; i < 4; i++)
        cin >> t, g -= t;
    if (g > 0)
        cout << "Gunnar";
    else if (g < 0)
        cout << "Emma";
    else
        cout << "Tie";

    return 0;
}