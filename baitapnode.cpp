#include <iostream>

using namespace std;

// ding nghia cau truc Node
struct Node {
    int data;           
    Node* next;         
};

// ham tao node moi
Node* createNode(int value) {
    Node* newNode = new Node;       
    newNode->data = value;          
    newNode->next = NULL;          
    return newNode;
}

// ham them node vao dau danh sach
void insertHead(Node*& head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

// ham them node vao cuoi danh sach
void insertTail(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* tail = head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}

// hàm in danh sach ra console
void printList(Node* head) {
    cout << "Danh sach cac phan tu: ";
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// hàm tim và xoa node trong danh sach
void deleteNode(Node*& head, int value) {
    if (head == NULL) {
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* curr = head;
    while (curr->next != NULL && curr->next->data != value) {
        curr = curr->next;
    }
    if (curr->next != NULL) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
}

int main() {
    Node* head = NULL;      
    
    int n,gtri;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int gtri;
        cin >> gtri;
        insertTail(head, gtri);
    }

    // in danh sách ra console
    printList(head);

    // tim và xoa node trong danh sách
    int x;
    cin >> x; // gia tri can xoa
    deleteNode(head, x);
    
    // in danh sách sau khi xóa ra console
    printList(head);

    return 0;
}

