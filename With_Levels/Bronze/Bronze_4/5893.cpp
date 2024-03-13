#include <bits/stdc++.h>
using namespace std;

int ans[10001];
int temp_input[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;

    string ans;
    ans = temp + "0000";
    int ans_len;
    ans_len = ans.length();
    for (int i = temp.length() - 1; i >= 0; i--)
    {
        ans_len--;
        if (temp[i] != '0')
            ans[ans_len]++;
    }
    for (int i = ans.length() - 1; i > 0; i--)
    {
        if (ans[i] >= '2')
        {
            ans[i - 1] += (ans[i] - '0') / 2;
            ans[i] = (ans[i] - '0') % 2 + '0';
        }
    }
    if (ans[0] == '2')
    {
        ans[0] = '0';
        cout << "1";
    }
    else if (ans[0] == '3')
    {
        ans[0] = '1';
        cout << "1";
    }
    else if (ans[0] == '4')
    {
        ans[0] = '0';
        cout << "10";
    }
    cout << ans << '\n';

    return 0;
}