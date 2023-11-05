#include <iostream>
#define MAX_SIZE 100 // định nghĩa kích thước tối đa của stack

using namespace std;

class Stack {
    private:
        int top; // chỉ số của phần tử trên cùng của stack
        int data[MAX_SIZE]; // mảng lưu trữ dữ liệu của stack
    public:
        Stack() {
            top = -1; // khởi tạo stack rỗng
        }
        
        // kiểm tra stack có rỗng hay không
        bool isEmpty() {
            return (top == -1);
        }
        
        // kiểm tra stack đã đầy chưa
        bool isFull() {
            return (top == MAX_SIZE - 1);
        }
        
        // thêm một phần tử vào stack
        void push(int value) {
            if (isFull()) {
                cout << "Stack is full!" << endl;
                return;
            }
            top++;
            data[top] = value;
        }
        
        // lấy một phần tử khỏi stack
        int pop() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return -1;
            }
            int value = data[top];
            top--;
            return value;
        }
        
        // lấy giá trị của phần tử trên cùng của stack
        int peek() {
            if (isEmpty()) {
                return -1;
            }
            return data[top];
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
