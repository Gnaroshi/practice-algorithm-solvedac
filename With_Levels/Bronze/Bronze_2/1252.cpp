#include <bits/stdc++.h>
using namespace std;

vector<int> a_v, b_v, ans, temp_ans;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int temp_a_len = a.length();
    int temp_b_len = b.length();
    int a_len = 1;
    int b_len = 1;

    for (int i = 0; i < temp_a_len; i++)
    {
        if (a[i] == '1')
        {
            a_len = temp_a_len - i;
            break;
        }
    }
    for (int i = 0; i < temp_b_len; i++)
    {
        if (b[i] == '1')
        {
            b_len = temp_b_len - i;
            break;
        }
    }

    int len_min = min(a_len, b_len);

    for (int i = temp_a_len - 1; i >= temp_a_len - a_len; i--)
        a_v.push_back(a[i] - '0');
    for (int i = temp_b_len - 1; i >= temp_b_len - b_len; i--)
        b_v.push_back(b[i] - '0');

    bool bef = false;
    bool first = false;
    if (a_v[0] == 1 && b_v[0] == 1)
    {
        bef = true;
        first = true;
    }
    for (int i = 0; i < len_min; i++)
    {
        int temp = a_v[i] + b_v[i];
        if (first)
        {
            first = false;
            ans.push_back(0);
            continue;
        }
        if (bef)
            temp++;
        if (temp == 2)
        {
            bef = true;
            ans.push_back(0);
        }
        else if (temp == 3)
        {
            bef = true;
            ans.push_back(1);
        }
        else
        {
            bef = false;
            ans.push_back(temp);
        }
    }

    // cout << "mid ans: ";
    // for (int i = ans.size() - 1; i >= 0; i--)
    // {
    //     cout << ans[i];
    // }
    // cout << '\n';
    // cout << "bef: " << bef << '\n';

    if (a_len != b_len)
    {
        if (a_len == len_min)
        {
            a_v.swap(b_v);
            swap(a_len, b_len);
        }

        if (a_v[len_min] == 1 && bef == true)
        {
            ans.push_back(0);
            for (int i = len_min + 1; i < a_len; i++)
            {
                if (bef)
                {
                    if (a_v[i] == 1)
                    {
                        bef = true;
                        ans.push_back(0);
                    }
                    else
                    {
                        bef = false;
                        ans.push_back(1);
                    }
                }
                else
                {
                    ans.push_back(a_v[i]);
                }
            }
        }
        else
        {
            if (bef)
            {
                ans.push_back(1);
                for (int i = len_min + 1; i < a_len; i++)
                {
                    ans.push_back(a_v[i]);
                }
                bef = false;
            }
            else
            {
                for (int i = len_min; i < a_len; i++)
                {
                    ans.push_back(a_v[i]);
                }
            }
        }
    }
    if (bef)
        ans.push_back(1);
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        temp_ans.push_back(ans[i]);
    }

    for (auto i : temp_ans)
    {
        cout << i;
    }
    cout << '\n';

    return 0;
}