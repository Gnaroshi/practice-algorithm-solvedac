// problem: Mars Window
// id: 17889
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c = 4;
    cin >> n;
    bool chk[10001] = {0};
    for (int i = 2018; i <= 10000; i += 2)
    {
        chk[i] = 1;
        c += 2;
        if (c > 12)
        {
            i++;
            c -= 12;
        }
    }
    cout << (chk[n] ? "yes" : "no");
    return 0;
}