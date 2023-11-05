#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int n,k,ans,a[N];
map<int,int> mp;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ans=0;
        mp.clear();
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(mp.count(a[i]-k))
                ans+=mp[a[i]-k];
            if(mp.count(a[i]+k))
                ans+=mp[a[i]+k];
            mp[a[i]]++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

