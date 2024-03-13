#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int iter = n / 4;
    for (int i = 0; i < iter; i++)
        cout << "long ";
    cout << "int\n";

    return 0;
}