#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
void input(Point &a){
	cin>>a.x>>a.y;
}
double distance(Point &a,Point &b){
	double l=(b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y);
	return sqrt(l);
}
int main(){
     struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

