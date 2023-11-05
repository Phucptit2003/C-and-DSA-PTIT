#include<bits/stdc++.h>
using namespace std;
#define a() a
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
class SinhVien{
	public:
	string ma="B20DCCN001";
	string name;
	string lop;
	string date;
	float gpa;
	friend istream& operator>>(istream& input,SinhVien &a){
	
		getline(cin,a.name);
		cin>>a.lop;
		cin>>a.date;
		cin>>a.gpa;
		return input;
	}
	friend ostream& operator<<(ostream &output,SinhVien a){
	cout<<a.ma<<" ";
		if(a.date[1]=='/'){
			a.date="0"+a.date;
		}
		if(a.date[4]=='/') a.date.insert(a.date.begin()+3,'0');
        
	    stringstream ss(a.name);
        vector<string>v;
        string c;
        while(ss>>c) v.push_back(c);
	for(int i=0;i<v.size();i++){
		chuanhoa(v[i]);
		cout<<v[i]<<" ";
	}
	cout<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
     return output;
}
};
int main(){
    SinhVien a;
    cin >>a;
    cout << a;
    return 0;
}

