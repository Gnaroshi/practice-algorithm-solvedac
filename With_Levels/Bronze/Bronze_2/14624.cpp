// problem: 전북대학교
// id: 14624
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (!(n % 2))
        cout << "I LOVE CBNU";
    else
    {
        for (int i = 0; i < n; i++)
            cout << '*';
        cout << '\n';
        for (int i = 0; i < n / 2; i++)
            cout << ' ';
        cout << "*\n";
        for (int i = 0; i < n - n / 2 - 1; i++)
        {
            for (int j = 0; j < n / 2 - i - 1; j++)
                cout << ' ';
            cout << '*';
            for (int j = 0; j < i * 2 + 1; j++)
                cout << ' ';
            cout << '*';
            cout << '\n';
        }
    }

    return 0;
}