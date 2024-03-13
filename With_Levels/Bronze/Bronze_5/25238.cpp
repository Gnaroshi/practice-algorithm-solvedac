#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float a, b;
    cin >> a >> b;
    if (a - (a * (b / 100)) >= 100)
        cout << 0 << '\n';
    else
        cout << 1 << '\n';

    return 0;
}