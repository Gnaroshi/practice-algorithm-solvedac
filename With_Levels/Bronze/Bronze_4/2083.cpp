#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string temp;
        int age, weight;
        cin >> temp >> age >> weight;
        if (temp == "#" && age == 0 && weight == 0)
            break;

        if (age > 17 || weight >= 80)
            cout << temp << " "
                 << "Senior" << '\n';

        else
            cout << temp << " "
                 << "Junior" << '\n';
    }

    return 0;
}