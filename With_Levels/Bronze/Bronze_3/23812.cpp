// problem: 골뱅이 찍기 - 돌아간 ㅍ
// id: 23812
// time taken:
#include <bits/stdc++.h>
using namespace std;

void s1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << '@';
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < n; k++)
                cout << ' ';
        for (int j = 0; j < n; j++)
            cout << '@';
        cout << '\n';
    }
    return;
}

void s2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            for (int k = 0; k < n; k++)
                cout << '@';
        cout << '\n';
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    s1(n);
    s2(n);
    s1(n);
    s2(n);
    s1(n);

    return 0;
}