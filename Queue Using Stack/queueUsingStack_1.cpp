#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    stack<int> s1, s2;

    void enQueue(int x)
    {
        s1.push(x);
    }

    int deQueue()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int ele = s2.top();
        s2.pop();
        return ele;
    }
};

// Driver code
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';

    return 0;
}

/*
This is Method - I Where Dequeue Operation is made costly by Using 2 stacks
TC =
Push operation: O(1).
Same as pop operation in stack.
Pop operation: O(N) in general and O(1) amortized time complexity.
In the worst case we have to empty the whole of stack 1 into stack 2 so its O(N).
Amortized time is the way to express the time complexity when an algorithm has the very bad time complexity only once in a while besides the time complexity that happens most of time. So its O(1) amortized time complexity, since we have to empty whole of stack 1 only when stack 2 is empty, rest of the times the pop operation takes O(1) time.
Auxiliary Space: O(N).
Use of stack for storing values.
*/