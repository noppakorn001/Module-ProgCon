// Insert Element to a Queue

#include <iostream>
#include <queue>

using namespace std;

int main() {

    // create a queue of string
    queue<string> animals;

    // pull element to queue
    animals.push("Cat");
    animals.push("Dog");
    animals.push("Mouse");

    cout << "Queue: ";

    // print queue
    while(!animals.empty()) {
        cout << animals.front() << ", ";
        animals.pop();
    }

    cout << endl;
 
  return 0;
}