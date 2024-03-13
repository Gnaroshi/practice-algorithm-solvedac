// problem: Time to Decompress
// id: 17010
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
        int n;
        char c;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
            cout << c;
        cout << '\n';
    }

    return 0;
}