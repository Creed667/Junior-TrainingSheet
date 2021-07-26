#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
using LL = long long;
using ull = unsigned long long int;


void solve(){
 int h,n,t,cnt=0;
 cin>>n>>h;
 for(int i=0;i<n;i++){
  cin>>t;
  if(t>h) cnt+=2;
  else cnt++;
 }
 cout<<cnt<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}