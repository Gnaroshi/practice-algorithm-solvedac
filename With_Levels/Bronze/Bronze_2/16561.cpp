// problem: 3의 배수
// id: 16561
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    n /= 3;
    for (int i = 1;; i++)
    {
        if (i > n)
            break;
        for (int j = 1;; j++)
        {
            if (i + j >= n)
                break;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}