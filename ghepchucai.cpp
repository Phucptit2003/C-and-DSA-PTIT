#include <bits/stdc++.h>

using namespace std;

int n;
char M[1005], u;
bool vis[1005];

bool N_am(char x){
    return x == 'A' || x == 'E';
}

bool check(){
    for(int i = 2; i <= n - 1; i++){
        if(!N_am(M[i - 1]) && N_am(M[i]) && !N_am(M[i + 1]))
            return false;
    }
    return true;
}

void Back(int i){
    for(char j = 'A'; j <= u; j++){
        if(!vis[j]){
            M[i] = j;
            vis[j] = true;
            if(i == n){
                if(check()){
                    for(int i = 1; i <= n; i++){
                        cout << M[i];
                    }
                    cout << "\n";
                }
            }
            else{
                Back(i + 1);
            }
            vis[j] = false;
        }
    }
}
int main() {
        cin >> u;
        n = u - 'A' + 1;
        Back(1);
    }
