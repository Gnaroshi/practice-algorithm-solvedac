// problem: 포인터 공부
// id: 25703
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << "int a;\n";
    cout << "int *ptr = &a;\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << "int ";
        for (int j = 0; j < i + 2; j++)
            cout << "*";
        if (i == 0)
            cout << "ptr" << i + 2 << " = &ptr;";
        else
            cout << "ptr" << i + 2 << " = &ptr" << i + 1 << ";";
        cout << '\n';
    }

    return 0;
}