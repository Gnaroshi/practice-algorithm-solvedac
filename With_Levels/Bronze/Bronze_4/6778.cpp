#include <bits/stdc++.h>
using namespace std;

string aliens[3] = {"TroyMartian", "VladSaturnian", "GraemeMercurian"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int antenna, eyes;
    cin >> antenna >> eyes;
    if (antenna >= 3 && eyes <= 4)
        cout << aliens[0] << '\n';
    if (antenna <= 6 && eyes >= 2)
        cout << aliens[1] << '\n';
    if (antenna <= 2 && eyes <= 3)
        cout << aliens[2] << '\n';

    return 0;
}