#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    bool is_empty() {
        return front == NULL;
    }

    void enqueue(int item) {
        Node* node = new Node(item);
        if (is_empty()) {
            front = node;
            rear = node;
            return;
        }
        rear->next = node;
        rear = node;
    }

    int dequeue() {
        if (is_empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int item = front->data;
        Node* temp = front;
        if (front == rear) {
            front = NULL;
            rear = NULL;
        }
        else {
            front = front->next;
        }
        delete temp;
        return item;
    }
};
int main() {
    Queue q;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        q.enqueue(x);
    }
    for(int i=1;i<=n;i++){
        cout<<q.dequeue()<<" ";
    }
    return 0;
}
