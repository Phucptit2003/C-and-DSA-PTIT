#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		string s=to_string(n);//p1 o(n)
		int check=1;
		for(int i=0;i<s.size()/2;i++){ //p2 o(n/2)=o(n) n la so luong chu so trong n
			if(s[i]!=s[s.size()-1-i]){
			check=0;
			break;
			}
		}
		if(check==1) cout<<”YES”<<endl;
		else cout<<”NO”<<endl;
	}
	return 0;
}
