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

void solve(){
 int n,m,x,y;
 vii v;
 cin>>n;
 forN(n){
  cin>>x;
  v.pb(x);
 }
 cin>>m;
 for(int i=0;i<m;i++){
   cin>>x>>y;
   x--;
   if(x==0){
     v[x+1] += v[x]-y;
     v[x] = 0;
   }
   else if(x==n-1){
     v[x-1] += y-1;
     v[x] =0;
   }
   else {
     v[x-1] += y-1;
     v[x+1] += v[x]-y;
     v[x] =0;
   }
 
 }
  forN(n) cout<<v[i]<<NL;
 }

int main()
{
  fastio;
  solve();
  return Monke;
}