// problem: 배수와 약수
// id: 5086
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        if (a % b == 0 && a > b)
            cout << "multiple\n";
        else if (b % a == 0 && a < b)
            cout << "factor\n";
        else
            cout << "neither\n";
    }

    return 0;
}