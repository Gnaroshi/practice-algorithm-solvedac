// problem: 골뱅이 찍기 - ㅂ
// id: 23808
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            cout << '@';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << '@';
        cout << '\n';
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            cout << '@';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << '@';
        cout << '\n';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            for (int k = 0; k < n; k++)
                cout << '@';
        cout << '\n';
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            cout << '@';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << ' ';
        for (int i = 0; i < n; i++)
            cout << '@';
        cout << '\n';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            for (int k = 0; k < n; k++)
                cout << '@';
        cout << '\n';
    }

    return 0;
}