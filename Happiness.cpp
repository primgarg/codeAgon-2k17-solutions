#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll vis[500010],com=-1;
vector <ll> g[500010],r[500010];
void dfs(ll i)
{
    //cout<<com<<endl;
	
	 
	 
	 
	 
	r[com].push_back(i);
	//cout<<r[comp].size()<<endl;
	vis[i]=1;
	for(ll j=0;j<g[i].size();j++)
	{
		if(!vis[g[i][j]])
		dfs(g[i][j]);
	}
}
int main() {
	// your code goes here
	ll n,m,ans=0,comp=0,dif=0;
	cin>>n>>m;
	vector <ll> v;
	for(ll i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(ll i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			com++;
			dfs(i);
			//cout<<count1<<" "<<loop<<endl;
		}
	}
//	cout<<com<<endl;
	for(ll i=0;i<=com;i++)
	{
		ll temp = 0;
		//cout<<r[i].size()<<endl;
		if(r[i].size()==1)
		continue;
		v.push_back(r[i].size());
		for(ll j=0;j<r[i].size();j++)
			{
				temp+=(ll)g[r[i][j]].size();
				//cout<<r[i][j]<<endl;
			}
		dif+=(temp/2-(ll)r[i].size())+1;	
	}
//	for(ll i=0;i<v.size();i++)
//	cout<<v[i]<<endl;
	//cout<<dif<<endl;
	if(dif>=2)
	{
		for(ll i=0;i<v.size();i++)
		ans+=v[i]*(v[i]-1);
	}
	else if(dif==1)
	{
		sort(v.begin(),v.end());
		for(ll i=0;i<v.size();i++)
		{
			if(i==0)
			ans+=v[i]*(v[i]-1) - 2*(v[i]-1);
			else
			ans+=v[i]*(v[i]-1);
		}
	}
	else if(dif==0)
	{
		sort(v.begin(),v.end());
		for(ll i=0;i<v.size();i++)
		{
			if(i==0)
			{
			    ans+=(v[i]-2)*(v[i]-3);
			}
			else
			ans+=v[i]*(v[i]-1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
