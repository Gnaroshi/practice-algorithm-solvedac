// problem: 해밍 거리
// id: 3449
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        int iter = a.length(), ans = 0;
        for (int i = 0; i < iter; i++)
            if (a[i] != b[i])
                ans++;
        cout << "Hamming distance is " << ans << ".\n";
    }

    return 0;
}