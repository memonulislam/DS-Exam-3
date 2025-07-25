#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head1;

    myStack()
    {
        head1 = NULL;
    }
};

class myQueue
{
public:
    Node *head2;
    Node *tail2;

    myQueue()
    {
        head2 = NULL;
        tail2 = NULL;
    }
};

int main()
{

    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    myStack st;
    myQueue que;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        Node *newNode = new Node(data);
        newNode->next = st.head1;
        st.head1 = newNode;
    }

    int i = 0;
    while (i < m)
    {
        int data;
        cin >> data;
        Node *newNode = new Node(data);
        if (que.head2 == NULL)
        {
            que.head2 = newNode;
            que.tail2 = newNode;
        }
        else
        {
            que.tail2->next = newNode;
            que.tail2 = newNode;
        }
        i++;
    }

    Node *temp1 = st.head1;
    Node *temp2 = que.head2;
    int found = 1;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            found = 0;
            break;
        }

        Node *deleteStack = temp1;
        Node *deleteQueue = temp2;

        temp1 = temp1->next;
        temp2 = temp2->next;

        delete deleteStack;
        delete deleteQueue;
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