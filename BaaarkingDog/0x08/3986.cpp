#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin>>tc;
    int cnt, loc;
    cnt = 0;
    while(tc--)
    {
        stack<char> S;
        string input_string;
        cin>>input_string;
        int input_string_size = input_string.size();

        loc = 0;
        bool isGood = true;
        while (true)
        {
            if (loc == input_string_size) break;
            if(!S.empty())
            {
                if(input_string[loc] == 'A')
                {
                    if(S.top() == 'A')
                    {
                        S.pop();
                    }
                    else S.push(input_string[loc]);

                }
                else if(input_string[loc] == 'B')
                {
                    if(S.top() == 'B')
                    {
                        S.pop();
                    }
                    else S.push(input_string[loc]);
                }
            }
            else
            {
                S.push(input_string[loc]);
            }
            loc++;
        }
        if (S.size() == 0) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}