#include <iostream>
#include <string>
#include <stack>

// Hàm thay thế các dấu ngoặc trong biểu thức
std::string replaceParentheses(const std::string& expression) {
    std::string result = expression;
    std::stack<int> st;

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == '(') {
            st.push(i);
        } else if (result[i] == ')') {
            if (!st.empty()) {
                int start = st.top();
                st.pop();

                if (start > 0 && result[start - 1] == '.') {
                    result[start] = '0';
                } else {
                    result[start] = '-';
                }
                result[i] = '1';
            } else {
                result[i] = '-';
            }
        }
    }

    while (!st.empty()) {
        int pos = st.top();
        st.pop();
        result[pos] = '-';
    }

    return result;
}

// Hàm main để kiểm tra
int main() {
    int numTests;
    std::cin >> numTests;
    std::cin.ignore();

    for (int i = 0; i < numTests; i++) {
        std::string expression;
        std::getline(std::cin, expression);

        std::string replaced = replaceParentheses(expression);
        std::cout << replaced << std::endl;
    }

    return 0;
}
