#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin>>n;

   vector<ll> v(n);
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
     ll k;
     cin>>k;
     mp[k]++;
   }
   ll ans=0;
   for(auto value:mp)
   {
      if(ans<value.second)
       ans=value.second;
   }
   cout<<n-ans<<endl;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
        solve();
   }
   return 0;
}