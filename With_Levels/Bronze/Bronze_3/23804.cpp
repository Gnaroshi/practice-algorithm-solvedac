// problem: 골뱅이 찍기 - ㄷ
// id: 23804
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < n; j++)
                cout << '@';
        cout << '\n';
    }
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << '@';
            cout << '\n';
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < n; j++)
                cout << '@';
        cout << '\n';
    }
    return 0;
}