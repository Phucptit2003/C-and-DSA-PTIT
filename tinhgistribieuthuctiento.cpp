#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
	 	cin >> s;
	 	int a,b;
        reverse(s.begin(),s.end());
        stack<long long> st;
        for(char &i : s)
        {
            if(isdigit(i)) st.push(i - '0');
            else
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                switch(i)
                {
                    case '+':
                    {
                        st.push(a + b);
                        break;
                    }
                    case '-':
                    {
                        st.push(a - b);
                        break;
                    }
                    case '*':
                    {
                        st.push(a * b);
                        break;
                    }
                    default:
                    {
                        st.push(a / b);
                        break;
                    }
                }
            }
        }
        cout << st.top() << endl;
    }
}

