#include <bits/stdc++.h>
using namespace std;

queue<int> q;
int n;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    while (true)
    {
        int temp;
        cin >> temp;
        if (temp == -1)
        {
            break;
        }
        else if (temp == 0)
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if (q.size() < n)
            {
                q.push(temp);
            }
        }
    }
    if (q.empty())
    {
        cout << "empty\n";
    }
    else
    {
        while (!q.empty())
        {
            int i = q.front();
            q.pop();
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}