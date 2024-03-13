// problem: Error Detection
// id: 5220
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
        int n, c;
        cin >> n >> c;
        int cnt = 0;
        while (n > 0)
        {
            cnt += n % 2;
            n /= 2;
        }
        if (cnt % 2 == c)
            cout << "Valid\n";
        else
            cout << "Corrupt\n";
    }

    return 0;
}