#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin>>n;

   string str;
   cin>>str;

   if(str[0]==str[n-1])
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