#include<bits/stdc++.h>
using namespace std;
int i,j,a,b,l,d;
struct Information {
        int so;
        int uoc[];
};

int main()
{
    ifstream f;
    ofstream g;
    f.open("QUASI.INP");
    f>>l; 
    f>>d; 
    f.close();
	Information info[l];
    int m=0;
    for(i=2;i<l;i++)
        {
            int n=0;
            for(j=1;j<i; j++)
                if(i%j == 0){
                    i = info[m].so;
                    j = info[m].uoc[n];
                    n++;
                    b = n; 
                }
            m++;
            a = m; 
        }

    int s=0,temp = 1, hieu; 
    for(i=0; i<a; i++){
            for(j=0; j<b; j++){
                s = s + info[i].uoc[j]; 
            }
            hieu = info[i].so - s;
            if(abs(hieu)<=d)
                temp++;
        }

    g.open("QUASI.OUT");
    g<<temp;
    g.close();

    return 0;
}
