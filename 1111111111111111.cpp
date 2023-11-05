#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluatePrefixExpression(string prefixExpression) {
    stack<int> operands;

    // Ð?c bi?u th?c ti?n t? t? ph?i qua trái
    for (int i = prefixExpression.length() - 1; i >= 0; i--) {
        char currentChar = prefixExpression[i];

        // N?u là toán h?ng, dua vào ngan x?p
        if (isdigit(currentChar)) {
            stringstream ss;
            ss << currentChar;
            int operand;
            ss >> operand;
            operands.push(operand);
        } else { // N?u là toán t?
            // L?y hai toán h?ng d?u tiên t? ngan x?p
            int operand1 = operands.top();
            operands.pop();
            int operand2 = operands.top();
            operands.pop();

            // Th?c hi?n phép toán và dua k?t qu? vào ngan x?p
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

    // K?t qu? cu?i cùng là giá tr? bi?u th?c
    return operands.top();
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        cin.ignore(); // B? qua ký t? xu?ng dòng

        string prefixExpression;
        getline(cin, prefixExpression);

        int result = evaluatePrefixExpression(prefixExpression);
        cout << result << endl;
    }

    return 0;
}

