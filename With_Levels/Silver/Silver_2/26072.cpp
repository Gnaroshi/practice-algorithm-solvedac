// problem: 곰곰이와 시소
// id: 26072
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n, l;
    cin >> n >> l;
    int *x = (int *)malloc(sizeof(int) * n);
    int *w = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> w[i];

    double f, b, m;
    f = 0;
    m = l / 2;
    b = l;

    double temp = 0;
    while (f <= b)
    {
        temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp += (m - x[i]) * w[i];
        }
        if (-0.00000001 <= temp && temp <= 0.00000001)
        {
            printf("%.7lf", m);
            return 0;
        }
        if (temp > 0)
        {
            b = m - 0.00000001;
            m = (f + b) / 2;
        }
        else if (temp < 0)
        {
            f = m + 0.00000001;
            m = (f + b) / 2;
        }
    }
    printf("%.7lf", m);
    return 0;
}