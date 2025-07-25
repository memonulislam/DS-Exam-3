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
        int res = str.length();

        queue<int> que;
        int i = 0;
        while (i < res)
        {
            que.push(str[i]);
            i++;
        }

        stack<char> st;
        while (!que.empty())
        {
            char c = que.front();
            que.pop();

            if (!st.empty())
            {
                char up = st.top();
                if ((up == '0' && c == '1') || (up == '1' && c == '0'))
                {
                    st.pop();
                    continue;
                }
            }
            st.push(c);
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