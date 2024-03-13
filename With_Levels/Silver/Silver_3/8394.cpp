// problem: 악수
// id:8394
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a, b;
    a = 1;
    b = 2;

    if (n == a)
        cout << a;
    else if (n == b)
        cout << b;
    else
    {
        int temp;
        for (int i = 2; i < n; i++)
        {
            temp = a + b;
            a = b;
            b = temp % 10;
        }
        cout << temp % 10;
    }

    return 0;
}