/*Method - II --> enqueue operation of one stack costly*/

#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    stack<int> s1, s2;
    void enQueue(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue()
    {
        if (s1.empty())
        {
            return -1;
        }

        int ans = s1.top();
        s1.pop();
        return ans;
    }
};

int main()
{
    Queue q;

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
}
/*
TC =
push operation: O(N) In the worst case we have empty whole of stack 1 into stack 2 and vice versa.
pop operation: O(1). It is same as the pop operation in the stack.
SC: O(N) => N space for storing N elements in the stacks.
*/