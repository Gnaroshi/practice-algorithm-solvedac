#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        s.push(temp);

        if (s.size() >= 2)
        {
            while (true)
            {
                if (s.size() == 1)
                    break;
                int cur = s.top();
                s.pop();
                int nxt = s.top();
                s.pop();
                if (cur > 0 && nxt > 0 || cur < 0 && nxt < 0)
                {
                    s.push(nxt);
                    s.push(cur);
                    break;
                }

                cur = cur + nxt;
                if (cur == 0)
                {
                    break;
                }
                s.push(cur);
            }
        }
    }

    if (s.empty())
    {
        cout << "Tie!\n";
        return 0;
    }
    if (s.top() > 0)
        cout << "Positives win!\n";
    else if (s.top() < 0)
        cout << "Negatives win!\n";
    stack<int> ans;
    while (!s.empty())
    {
        int cur = s.top();
        s.pop();
        ans.push(cur);
    }
    while (!ans.empty())
    {
        int cur = ans.top();
        ans.pop();
        cout << cur << ' ';
    }
    cout << '\n';

    return 0;
}