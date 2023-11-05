#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream f;
    f.open("DATA.in");
    int c[1000001] = {0};
    int tmp;
    vector <int> v;
    while(f >> tmp){
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size(); i++){
		c[v[i]]++;
	}
	for(int i = 0; i < 100000; i++){
		if(c[i] != 0){
			cout << i << " " << c[i] << endl;
		}
	}
	f.close();
}
