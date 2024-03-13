#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int n; cin>>n;
    int nSize = n;
    string commands;
    stack<int> arr;
    stack<int> nums;

    int temp;
    int loc = 0;
    bool isValid = false;
    while(n--)
    {   
        cin>>temp;
        if (temp > loc)
        { 
            while(temp > loc)
            {
                loc++;
                arr.push(loc);
                commands += '+';
            }
            arr.pop();
            commands += '-';
        }
        else
        {
            isValid = false;
            if (arr.empty() == 0)
            {
                if (temp == arr.top())
                {
                    isValid = true;
                }
                arr.pop();
                commands += '-';
            }
            if (isValid == false) break;
        }
    }
    if (nSize == 1) cout<<"+\n-\n";
    else if (isValid == false) cout<<"NO\n"; 
    else for (int i = 0; i < commands.length(); i++) cout<<commands[i]<<"\n";

    return 0;
}
