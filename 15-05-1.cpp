#include <iostream>
#include <string>
#include <stack>
using namespace std;

string replaceParentheses(string expression) {
    stack<int> stk;
    string result = "";

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            stk.push(i);
            result += "-1";
        } else if (expression[i] == ')') {
            if (!stk.empty()) {
                int start = stk.top();
                stk.pop();
                if (start == result.length() - 1) {
                    result += "0";
                } else {
                    result += "1";
                }
            }
        } else {
            result += expression[i];
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string expression;
        getline(cin, expression);

        string replacedExpression = replaceParentheses(expression);
        cout << replacedExpression << endl;
    }

    return 0;
}

