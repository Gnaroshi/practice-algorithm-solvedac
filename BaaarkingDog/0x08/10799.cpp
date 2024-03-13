#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input_string;
    cin>>input_string;

    
    int cnt = 0;
    stack<char> S;
    for (int i = 0; i < input_string.size(); i++)
    {
        if (input_string[i] == ')')
        {
            if(input_string[i - 1] == '(')
            {
                S.pop();
                cnt += S.size();
            }
            else 
            {
                S.pop();
                cnt++;
            }
        }
        else 
        {
            S.push(input_string[i]);
        }
    }

    cout<<cnt<<"\n";
    return 0;
}