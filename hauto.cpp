#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])||(isdigit(s[i+1]))) return true;
    }
    return false;
}

long long Tinh(string s){
    long long sum=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i]))
            sum=sum*10+s[i]-'0';
    }
    if(s[0]=='-') sum=-1*sum;
    return sum;
}

int checkdau(string s){
    for(auto x:s){
        if(x=='+') return 1;
        else if(x=='-') return 2;
        else if(x=='*') return 3;
        else return 4;
    }
}
void Try(vector <string> v) {
    stack<long long> operands;

    for (int i = 0;i<=v.size()-1; i++) {
        if (check(v[i])) {
            long long t=Tinh(v[i]);
            operands.push(t);
        } else { 
            long long operand1 = operands.top();
            operands.pop();
            long long operand2 = operands.top();
            operands.pop();

            switch (checkdau(v[i])) {
                case 1:
                    operands.push(operand1 + operand2);
                    break;
                case 2:
                    operands.push(operand2 - operand1);
                    break;
                case 3:
                    operands.push(operand1 * operand2);
                    break;
                case 4:
                    operands.push(operand2 / operand1);
                    break;
                default:
                    break;
            }
        }
    }
    cout<< operands.top()<<endl;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        cin.ignore(); 

        string s;
        getline(cin, s);
        stringstream ss(s);
        string c;
        vector<string>v;
        while(ss>>c){
            v.push_back(c);
        }

        Try(v);
    }

    return 0;
}





