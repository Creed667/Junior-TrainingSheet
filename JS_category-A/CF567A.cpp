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
  int n;
  vii v1;
  vector<pair<int,int>>v;
  cin>>n;
  int x,y;

  forN(n){
  cin>>x;
  v1.pb(x);
  }
  forN(n){
    if(i==0){
      x = abs(v1[i]-v1[i+1]);
      y = abs(v1[i] - v1[n-1]);
      v.pb(mp(x,y));
    }
    else if(i==n-1){
      x = abs(v1[i]-v1[i-1]);
      y = abs(v1[n-1]-v1[0]);
      v.pb(mp(x,y));
    }
    else {
     x = min(abs(v1[i]-v1[i-1]),abs(v1[i]-v1[i+1]));     
     y = max(abs(v1[0]-v1[i]),abs(v1[i]-v1[n-1]));
     v.pb(mp(x,y));
    }
  }
  forN(n){
    cout<<v[i].first<<" "<<v[i].second<<NL;
  }
}

int main()
{
  fastio;
  solve();
  return Monke;
}