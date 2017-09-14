#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <ll> v;
int main() {
    ll n,m,k,x,ans=0,f_ans=LLONG_MAX;
    cin>>n>>m>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
        v.push_back(i);
    }
    if((ll)v.size()<m)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    ans+=v[0];
    for(ll i=1;i<m;i++)
    ans+=(v[i]-v[i-1])*(k)*(i);
    f_ans=ans;
    for(ll i=m;i<v.size();i++)
    {
       ans=ans-((v[i-1]-v[i-m])*k)+((v[i]-v[i-1])*(k)*(m-1))+(v[i-m+1]-v[i-m]);
       f_ans=min(f_ans,ans);
    }
	cout<<f_ans<<endl;
	return 0;
}
