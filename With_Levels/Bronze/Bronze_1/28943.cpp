// problem: В поисках неизведанного
// id: 28943
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
            cin >> t;
    }
    cout << (n == 1);
    // n이 1이 아니면 A-B, B-A와 같이 항상 짝수개의 경로가 생김

    return 0;
}