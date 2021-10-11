#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
#define mp make_pair
#define pb push_back
#define forN(x) for(int i=0;i<x;i++)
#define vii vector<int>
#define vLL vector<long long>
using LL = long long;
using ull = unsigned long long int;
const int Monke = 0;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}


bool prime(int n){
   if(n==2) return true;
   for(int i=2;(i*i)<=n;i++){
      if(n%i==0) return false;
   }
   return true;
}

void solve(){
   int n,m;
   cin>>n>>m;
   vii primes;
   for(int i=2;i<=50;i++) {
      if(prime(i)) primes.pb(i);
   }
   auto i = upper_bound(all(primes),n);
   //cout<<*i<<NL;
   if(*i==m) cout<<"YES"<<NL;
   else cout<<"NO"<<NL;

}

int main()
{
   fastio;
   solve();
    cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return Monke;
}