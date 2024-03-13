// problem: Longest Subsequence
// id: 10202
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
        int n, cnt = 0, mx = 0;
        cin >> n;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == 'X')
                cnt++;
            else
            {
                mx = max(cnt, mx);
                cnt = 0;
            }
        }
        mx = max(cnt, mx);
        cout << "The longest contiguous subsequence of X's is of length " << mx << '\n';
    }

    return 0;
}