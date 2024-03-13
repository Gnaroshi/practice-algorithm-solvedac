#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> mxh;

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
        if (temp == 0)
        {
            if (mxh.empty())
                cout << 0 << '\n';
            else
            {
                cout << mxh.top() << '\n';
                mxh.pop();
            }
        }
        else
        {
            mxh.push(temp);
        }
    }

    return 0;
}