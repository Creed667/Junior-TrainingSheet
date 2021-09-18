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
  vector<pair<int,int>>v;
  int n;
  cin>>n;
  int x;
  forN(n){
   cin>>x;
   v.pb(mp(x,i+1));
  } 
  sort(all(v));
  forN(n){
   cout<<v[i].second;
   if(i != n-1) cout<<" ";
  }
  cout<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}