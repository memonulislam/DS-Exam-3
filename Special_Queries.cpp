#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query;
    cin >> query;

    queue<string> que;
    stack<string> st;

    string cmd, nm;

    while (query--)
    {
        cin >> cmd;

        if (cmd == "0")
        {
            cin >> nm;
            que.push(nm);
            st.push(nm);
        }
        else if (cmd == "1")
        {
            if (!que.empty())
            {
                cout << que.front() << endl;
                que.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
