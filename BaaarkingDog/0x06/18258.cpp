#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int commands; cin>>commands;
    queue<int> Q;

    string command;
    for (int i = 0; i < commands; i++)
    {
        cin>>command;
        if (command == "push")
        {
            int inputInt;
            cin>>inputInt;
            Q.push(inputInt);
        }
        else if (command == "pop")
        {
            if (!Q.empty())
            {
                int temp;
                temp = Q.front();
                cout<<temp<<"\n";
                Q.pop();
            }
            else cout<<"-1\n";
        }
        else if (command == "size")
        {
            cout<<Q.size()<<"\n";
        }
        else if (command == "empty")
        {
            cout<<Q.empty()<<"\n";
        }
        else if (command == "front")
        {
            if (!Q.empty())
            {
                cout<<Q.front()<<"\n";   
            }
            else cout<<"-1\n";
        }
        else if (command == "back")
        {
            if (!Q.empty())
            {
                cout<<Q.back()<<"\n";   
            }
            else cout<<"-1\n";
        }
    }
    return 0;
}