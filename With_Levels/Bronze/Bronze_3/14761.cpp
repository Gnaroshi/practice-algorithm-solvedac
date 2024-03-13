// problem: FizzBuzz
// id: 14761
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n;
    cin >> a >> b >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            if (i % a == 0)
                cout << "Fizz";
            if (i % b == 0)
                cout << "Buzz";
        }
        else
            cout << i;
        cout << '\n';
    }

    return 0;
}