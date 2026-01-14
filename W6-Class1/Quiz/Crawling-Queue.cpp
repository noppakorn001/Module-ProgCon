#include <iostream>
using namespace std;

class LinearQueue {
private:
    char items[5];
    int front, back, size;

public:
    LinearQueue() {
        front = -1;
        back = -1;
        size = 5;
    }

    // input Queue
    void enqueue(char element) {
        if (back == size - 1) {
            cout << "Queue Full!" << endl;
            return;
        }
        
        // if it is the first element
        if (front == -1) front = 0;
        
        back++;
        items[back] = element;
        cout << "Enqueue('" << element << "') -> \tfront: " << front << ", back: " << back << endl;
    }

    // output Queue
    char dequeue() {
        if (front == -1 || front > back) {
            cout << "Queue Empty!" << endl;
            return '\0';
        }

        char element = items[front];
        cout << "Dequeue() -> '" << element << "' \tfront: ";
        
        // move front pointer
        front++;
        
        // if the last element is removed, reset pointers
        if (front > back) {
            // (in this problem, we don't need to reset, but we keep it for completeness)
            // front = back = -1; 
        }
        
        cout << front << ", back: " << back << endl;
        return element;
    }

    void displayState() {
        cout << "Current state -> \tfront: " << front << ", back: " << back << endl;
        cout << "-------------------------------------------" << endl;
    }
};

int main() {
    LinearQueue Q;
    
    cout << "Initial state: \t\tfront: -1, back: -1" << endl;
    cout << "-------------------------------------------" << endl;

    Q.enqueue('A');
    Q.enqueue('B');
    Q.enqueue('C');

    char c = Q.dequeue();

    Q.enqueue('A');

    return 0;
}