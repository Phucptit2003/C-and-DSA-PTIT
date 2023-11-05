#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = top;
        if (top != nullptr) {
            top->prev = newNode;
        }
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        if (top != nullptr) {
            top->prev = nullptr;
        }
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return top->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        st.push(x);
    }
    st.display(); 
    st.pop();
    st.display(); 
    
    return 0;
}
