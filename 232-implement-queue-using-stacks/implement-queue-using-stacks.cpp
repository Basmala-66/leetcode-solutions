#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
    stack<int> stack1;
    stack<int> stack2;

    // نقل العناصر من stack1 إلى stack2 لما نحتاج
    void transfer() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

public:
    // إدخال عنصر
    void push(int x) {
        stack1.push(x);
    }

    // إخراج أول عنصر
    int pop() {
        if (stack2.empty()) transfer(); // لو stack2 فاضي ننقل
        int val = stack2.top();
        stack2.pop();
        return val;
    }

    // عرض أول عنصر
    int peek() {
        if (stack2.empty()) transfer();
        return stack2.top();
    }

    // التحقق من أن الكيو فاضي
    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};

