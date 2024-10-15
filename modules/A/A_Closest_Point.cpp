#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin>>n;

   vector<ll> v(n);
   for(int i=0;i<n;i++)
    cin>>v[i];

   sort(v.begin(),v.end());
  // ll s=INT_MAX;
    
   if(n==2 && abs(v[0]-v[1])>1)
    cout<<"NO"<<endl;

   else 
   cout<<"YES"<<endl; 
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