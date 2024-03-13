#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin>>tc;
    while(tc--)
    {
        stack<char> S;
        string input_string;
        cin>>input_string;


        int loc = 0;
        
        bool isVPS = true;
        for(int i = 0; i < input_string.size(); i++)
        {
            if (input_string[i] == '(') S.push(input_string[i]);
            else
            {
                if (S.empty() || S.top() == ')')
                {
                    isVPS = false;
                    break;
                }
                S.pop();
            }
        }
        if (!S.empty()) isVPS = false;
        if (isVPS) cout<<"YES\n";
        else cout<<"NO\n";        
    }
    return 0;
}