#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string masv="B20DCCN";
		string ten;
		string lop;
		int ngay,thang,nam;
		float gpa;
		void nhap(){
			cin.ignore();
			
		}
};
SinhVien nhap(SinhVien n[]){
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
} 
