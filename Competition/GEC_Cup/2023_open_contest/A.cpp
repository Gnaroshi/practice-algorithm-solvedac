// problem: A번 - 특별한 학교 이름
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    cin >> temp;
    if (temp[0] == 'N')
        cout << "North London Collegiate School";
    else if (temp[0] == 'B')
        cout << "Branksome Hall Asia";
    else if (temp[0] == 'K')
        cout << "Korea International School";
    else if (temp[0] == 'S')
        cout << "St. Johnsbury Academy";

    return 0;
}