// problem: 이산수학 과제
// id: 14723
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    for (int i = 2;; i++)
    {
        int t = i;
        for (int j = 1; j < i; j++)
        {
            cnt++;
            if (cnt == n)
            {
                cout << t - j << ' ' << j;
                return 0;
            }
        }
    }

    return 0;
}