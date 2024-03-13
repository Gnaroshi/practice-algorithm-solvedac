// problem: Too Much Water
// id: 6696
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, y;
    while (true)
    {
        cin >> x >> y;
        if (!x && !y)
            break;
        cout << "The property will be flooded in hour " << ceil((x * x + y * y) * M_PI / 100.0) << ".\n";
    }

    return 0;
}