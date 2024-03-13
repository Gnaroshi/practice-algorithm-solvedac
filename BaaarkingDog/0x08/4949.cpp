#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    while(true)
    {
        string input_string;
        stack<char> S;
        getline(cin, input_string);

        bool isBalenced = true;
        if(input_string.size() == 1 && input_string[0] == '.') break;
        for (int i = 0; i < input_string.size(); i++)
        {
            if (input_string[i] == '['
            || input_string[i] == '(') 
            {
                S.push(input_string[i]);
            }
            else if(input_string[i] == ']')
            {
                if(!S.empty() && S.top() == '[') S.pop();
                else
                {
                    isBalenced = false;
                    break;
                }
            }
            else if (input_string[i] == ')')
            {
                if(!S.empty() && S.top() == '(') S.pop();
                else
                {
                    isBalenced = false;
                    break;
                }
            }
        }

        if (isBalenced && S.empty()) cout<<"yes\n";
        else cout<<"no\n";

    }
    return 0;

}