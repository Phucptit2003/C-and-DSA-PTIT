#include<bits/stdc++.h>
using namespace std;
#define a() a
int dem=0;
void chuanhoa(string &v){
	v[0]=toupper(v[0]);
	for(int i=1;i<v.size();i++){
		v[i]=tolower(v[i]);
	}
}
class SinhVien{
public:
	string masv;
	string hoten,lop,date;
	float gpa;
		friend istream& operator>>(istream& input,SinhVien &sv){
			cin.ignore();
			getline(cin,sv.hoten);
			cin>>sv.lop;
			cin>>sv.date;
			cin>>sv.gpa;
			if(sv.date[1]=='/') sv.date="0"+sv.date;
			if(sv.date[4]=='/') sv.date.insert(sv.date.begin()+3,'0');
			return input;
		} 
	    friend ostream& operator<<(ostream& output,SinhVien sv){
	    	dem++;
	    	string res=to_string(dem);
	    	while(res.size()<3) res="0"+res;
	    	sv.masv="B20DCCN"+res;
	    	stringstream ss(sv.hoten);
	    	string c;
	    	vector<string>v;
	    	while(ss>>c) v.push_back(c);
	    	cout<<sv.masv<<" ";
	    	for(int i=0;i<v.size();i++){
	    		chuanhoa(v[i]);
	    		cout<<v[i]<<" ";
			}
			cout<<" "<<sv.lop<<" "<<sv.date<<" "<<fixed<<setprecision(2)<<sv.gpa<<endl;
	    	return output;
		}	
};
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

