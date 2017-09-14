#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s,temp="";
    ll k;
    cin>>s>>k;
    ll h[26];
    for(ll i=0;i<26;i++)
        h[i]=0;
    for(ll i=0;i<s.length();i++)
        h[s[i]-'a']++;
    for(ll i=0;i<s.length();i++)
    {
        if(h[s[i]-'a']>=k)
            temp+=s[i];
    }
    cout<<temp<<endl;
    return 0;
}

