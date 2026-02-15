#include <iostream>
#include <queue>
using namespace std;


void Display(queue<int> q){
    while(!q.empty()){
        cout<< q.front() << ",";
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(9);
    q.push(8);

    // show front and back element of queue
    cout<<"Original Queue: "<<endl;
    cout << "   front: "<<q.front() << endl;
    cout << "   back: "<<q.back() << endl;
    cout<<"   Display: ";
    Display(q);

    cout<<"\nQueue after push: "<<endl;
    q.push(12);
    q.push(20);
    q.push(30);
    cout << "   front: "<<q.front() << endl;
    cout << "   back: "<<q.back() << endl;

    cout<<"   Display: ";
    Display(q);
}
