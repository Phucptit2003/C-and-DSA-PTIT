#include <iostream>
using namespace std;

class Queue {
private:
    int capacity;
    int* queue;
    int front;
    int rear;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        queue = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool is_empty() {
        return front == -1;
    }
    
    void enqueue(int item) {
        if (is_empty()) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
    }

    int dequeue() {
        if (is_empty()) {
            return -1;
        }
        int item = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
        return item;
    }
};
int main() {
	int n;
	cin>>n;
    Queue q(n);
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<n;i++){
		q.enqueue(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<q.dequeue()<<" ";
//		q.pop();
	}
	cout<<endl;
    return 0;
}

