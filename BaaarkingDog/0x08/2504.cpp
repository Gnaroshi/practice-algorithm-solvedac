#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string input_string;
    cin>>input_string;
    stack<char> S;


    int ans = 0;
    int temp = 1;
    bool isValid = true;
    for (int i = 0; i < input_string.size(); i++)
    {
        if (input_string[i] == '(') 
        {
            temp *= 2;
            S.push(input_string[i]);
        }
        else if (input_string[i] == '[') 
        {
            temp *= 3;
            S.push(input_string[i]);
        }
        else if (input_string[i] == ')')
        {   
            if (S.empty() || S.top() != '(')
            {
                isValid = false;
                break;
            }
            if (input_string[i - 1] == '(') ans += temp;
            S.pop();
            temp /= 2;
        }
        else if (input_string[i] == ']')
        {   
            if (S.empty() || S.top() != '[')
            {
                isValid = false;
                break;
            }
            if (input_string[i - 1] == '[') ans += temp;
            S.pop();
            temp /= 3;
        }
    }

    if (!S.empty()) isValid = false;
    if (!isValid) ans = 0;
    cout<<ans<<"\n";
    return 0;
}
