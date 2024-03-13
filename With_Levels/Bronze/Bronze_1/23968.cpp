// problem: 알고리즘 수업 - 버블 정렬 1
// id: 23968
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, k, cnt;
int a[10001];

void bubble_sort()
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                cnt++;
                swap(a[j], a[j + 1]);
                if (cnt == k)
                {
                    cout << a[j] << ' ' << a[j + 1];
                    return;
                }
            }
        }
    }
    cout << -1;
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bubble_sort();

    return 0;
}