// problem: Terms of Office
// id: 6888
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i += 60)
        cout << "All positions change in year " << i << '\n';

    return 0;
}