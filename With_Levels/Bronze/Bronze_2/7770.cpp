// problem: 아즈텍 피라미드
// id: 7770
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 1, ad = 1;
    cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        ad += 4 * i;
        cnt += ad;
        if (cnt > n)
        {
            cout << i;
            break;
        }
    }

    // 1 1+1+4 1+1+4+1+4+8

    return 0;
}