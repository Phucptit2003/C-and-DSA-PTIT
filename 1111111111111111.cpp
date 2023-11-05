#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluatePrefixExpression(string prefixExpression) {
    stack<int> operands;

    // �?c bi?u th?c ti?n t? t? ph?i qua tr�i
    for (int i = prefixExpression.length() - 1; i >= 0; i--) {
        char currentChar = prefixExpression[i];

        // N?u l� to�n h?ng, dua v�o ngan x?p
        if (isdigit(currentChar)) {
            stringstream ss;
            ss << currentChar;
            int operand;
            ss >> operand;
            operands.push(operand);
        } else { // N?u l� to�n t?
            // L?y hai to�n h?ng d?u ti�n t? ngan x?p
            int operand1 = operands.top();
            operands.pop();
            int operand2 = operands.top();
            operands.pop();

            // Th?c hi?n ph�p to�n v� dua k?t qu? v�o ngan x?p
            switch (currentChar) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
                default:
                    break;
            }
        }
    }

    // K?t qu? cu?i c�ng l� gi� tr? bi?u th?c
    return operands.top();
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        cin.ignore(); // B? qua k� t? xu?ng d�ng

        string prefixExpression;
        getline(cin, prefixExpression);

        int result = evaluatePrefixExpression(prefixExpression);
        cout << result << endl;
    }

    return 0;
}

