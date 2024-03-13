// problem: 간지(干支)
// id: 7572
// time taken:
#include <bits/stdc++.h>
using namespace std;
int tg[10] = {6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
char ti[12] = {'I', 'J', 'K', 'L', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n %= 60;
    cout << ti[n % 12] << tg[n % 10];

    return 0;
}