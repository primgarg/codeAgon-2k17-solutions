#include <bits/stdc++.h>
using namespace std;
int main() {
    int q; 
       
     
     
    cin>>q;
    while(q--)
    {
        int n,count=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
       map <int ,int> mp; 
    int flag=0;    
    for(int i=0;i<n;i++)
    {
        if(a[i]<1||a[i]>n)
        {
            flag=1;
            break;
        }
        mp[a[i]]++;
        if(mp[a[i]]>1)
        {
            flag=1;
            break;
        }
       if(i>=1)
       {
           if(a[i]>a[i-1])
               count++;
       }
    }
    if(flag==1||count==n-1)
         cout<<"Ugly"<<endl;
    else
        cout<<"Beautiful"<<endl;
    }
    return 0;
}

