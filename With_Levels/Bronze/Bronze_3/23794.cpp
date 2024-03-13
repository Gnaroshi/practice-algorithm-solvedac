// problem: 골뱅이 찍기 - 정사각형
// id: 23794
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << '@';
    for (int i = 0; i < n; i++)
        cout << '@';
    cout << "@\n";

    for (int i = 0; i < n; i++)
    {
        cout << '@';
        for (int j = 0; j < n; j++)
            cout << ' ';
        cout << "@\n";
    }

    cout << '@';
    for (int i = 0; i < n; i++)
        cout << '@';
    cout << "@\n";

    return 0;
}