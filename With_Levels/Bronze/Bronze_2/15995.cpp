// problem: 잉여역수 구하기
// id: 15995
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, m;
    cin >> a >> m;

    for (int i = 1; i <= 10000; i++)
    {
        if ((a * i) % m == 1)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}