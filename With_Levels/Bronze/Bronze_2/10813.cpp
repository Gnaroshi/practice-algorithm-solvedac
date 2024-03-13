// problem: 공 바꾸기
// id: 10813
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int *balls = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        balls[i] = i + 1;
    for (int i = 0; i < m; i++)
    {
        int a, b, temp;
        cin >> a >> b;
        temp = balls[a - 1];
        balls[a - 1] = balls[b - 1];
        balls[b - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << balls[i] << ' ';

    return 0;
}