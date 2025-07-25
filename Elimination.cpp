#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int tc = 0; tc < T; tc++)
    {
        string str;
        cin >> str;
        int req = str.size();

        stack<char> st;
        queue<char> que;

        int i = 0;
        while (i < req)
        {
            que.push(str[i]);
            i++;
        }

        while (!que.empty())
        {
            char c = que.front();
            que.pop();

            if (!st.empty() && st.top() == '0' && c == '1')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}