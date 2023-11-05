#include <iostream>

using namespace std;

// Khai báo một lớp đại diện cho một nút trong danh sách liên kết đơn
class Node {
    public:
        int data; // giá trị của nút
        Node* next; // con trỏ đến nút tiếp theo trong danh sách
};

class Stack {
    private:
        Node* top; // con trỏ đến phần tử trên cùng của stack
    public:
        Stack() {
            top = nullptr; // khởi tạo stack rỗng
        }
        
        // kiểm tra stack có rỗng hay không
        bool isEmpty() {
            return (top == nullptr);
        }
        
        // thêm một phần tử vào stack
        void push(int value) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = top;
            top = newNode;
        }
        
        // lấy một phần tử khỏi stack
        int pop() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return -1;
            }
            int value = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            return value;
        }
        
        // lấy giá trị của phần tử trên cùng của stack
        int peek() {
            if (isEmpty()) {
                return -1;
            }
            return top->data;
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
     
    while(st.peek()!=-1){
        cout<<st.pop()<<endl;
    }
    
    return 0;
}
