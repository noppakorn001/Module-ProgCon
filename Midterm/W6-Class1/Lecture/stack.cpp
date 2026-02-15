#include <iostream>
#include <stack>
using namespace std;

// function prototype for display_stack utility
void display_stack(stack<int> ds);

int main() {
    stack<int> st;

    st.push(6);
    st.push(4);
    st.push(10);
    st.push(12);

    cout << "Original Stack: " << endl;
    cout << "top:" << st.top() << endl; // shown top element
    cout << "size:"<< st.size() << endl; // shown size of stack
    display_stack(st);

    cout << "\n";

    cout << "After Pop: " << endl;
    st.pop(); // remove top element
    cout << "top:" << st.top() << endl;
    cout << "size:"<<st.size() << endl;
    display_stack(st);
    return 0;
}

void display_stack(stack<int> ds) {
    
    while(!ds.empty()) {
        cout << ds.top() << ", ";
        ds.pop();
    }

    cout << endl;
}