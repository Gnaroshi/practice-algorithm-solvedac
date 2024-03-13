#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100000;
vector<int> p(SIZE);
void LS(int n)
{
    for (int i = 2; i <= n; i++)
        p[i] = i;
    for (int i = 2; i * i <= n; i++)
    {
        if (p[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (p[j] == j)
                    p[j] = i;
            }
        }
    }
    return;
}

int main(void)
{
    int n;
    cin >> n;
    LS(n);
    for (int i = 1; i <= n; i++)
        cout << p[i] << ' ';

    return 0;
}