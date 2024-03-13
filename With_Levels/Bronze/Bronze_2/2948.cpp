// problem: 2009년
// id: 2948
// time taken:
#include <bits/stdc++.h>
using namespace std;
string dt[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int md[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, m, c = 3, sd = 0;
    cin >> d >> m;
    for (int i = 0; i < m; i++)
        sd += md[i];
    sd += d + c - 1;
    sd %= 7;
    cout << dt[sd];

    return 0;
}