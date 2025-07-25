#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    int i = 0;

    while (i < m)
    {
        int val;
        cin >> val;
        q.push(val);
        ++i;
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    int found = 1;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            found = 0;
            break;
        }
        st.pop();
        q.pop();
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}