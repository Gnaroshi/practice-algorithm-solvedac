// problem: 피드백
// id: 18856
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int *arr = (int *)malloc(sizeof(int) * n);
    arr[0] = 1;
    arr[1] = 2;
    for (int i = 2; i < n; i++)
        arr[i] = i + 1;
    arr[n - 1] = 997;
    cout << n << '\n';
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}