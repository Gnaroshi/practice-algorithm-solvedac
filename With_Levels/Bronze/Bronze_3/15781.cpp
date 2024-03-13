// problem: 헬멧과 조끼
// id: 15781
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int mxa = -1, mxb = -1;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mxa = max(mxa, t);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> t;
        mxb = max(mxb, t);
    }
    cout << mxa + mxb;

    return 0;
}