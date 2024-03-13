// problem: 정보섬의 대중교통
// id: 28113
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    if (a < b)
        cout << "Bus";
    else if (a > b)
        cout << "Subway";
    else
        cout << "Anything";

    return 0;
}