// problem: Africa
// id: 15629
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;

    bool is_south_africa = false;
    bool is_zambia = false;
    bool is_zimbabwe = false;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        if (temp == "botswana")
        {
        }
        else if (temp == "ethiopia")
        {
            ans += 50;
        }
        else if (temp == "kenya")
        {
            ans += 50;
        }
        else if (temp == "namibia")
        {
            if (is_south_africa)
                ans += 40;
            else
                ans += 140;
        }
        else if (temp == "south-africa")
        {
            is_south_africa = true;
        }
        else if (temp == "tanzania")
        {
            ans += 50;
        }
        else if (temp == "zambia")
        {
            is_zambia = true;
            if (is_zimbabwe)
                ans += 20;
            else
                ans += 50;
        }
        else if (temp == "zimbabwe")
        {
            is_zimbabwe = true;
            if (!is_zambia)
                ans += 30;
        }
        if (temp != "zambia" && temp != "zimbabwe")
        {
            is_zambia = false;
            is_zimbabwe = false;
        }
    }
    cout << ans << '\n';

    return 0;
}