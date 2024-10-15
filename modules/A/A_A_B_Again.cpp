#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin>>n;

   ll ans=n%10;
   n=n/10;
   ans+=n;
   cout<<ans<<endl;
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