// problem: Are They All Integers?
// id: 18141
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool solv(int a, int b, int c)
{
    if ((a - b) % c != 0)
        return false;
    if ((b - c) % a != 0)
        return false;
    if ((c - a) % b != 0)
        return false;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (!solv(a[i], a[j], a[k]))
                {
                    cout << "no";
                    return 0;
                }
            }
        }
    }
    cout << "yes";

    return 0;
}