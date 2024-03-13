// problem: Andando no tempo
// id: 13580
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nums[3];
    int temp, cnt;
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
    for (int i = 0; i < 26; i++)
    {
        temp = 0;
        cnt = i;
        for (int j = 0; j < 3; j++)
        {
            if (cnt % 3 == 0)
                temp += nums[j];
            else if (cnt % 3 == 1)
                temp -= nums[j];
            cnt /= 3;
        }
        if (temp == 0)
        {
            cout << "S";
            return 0;
        }
    }
    cout << "N";

    return 0;
}