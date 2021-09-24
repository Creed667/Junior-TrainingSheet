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

bool sc(int a,int b) {return a>b;}

void solve(){
  int n;
  cin>>n;
  vector<int>v,v2;
  int x,y,diff=0;
  forN(n) {
    cin>>x>>y;
    if(abs(x-y) !=0) diff=1;
    v.pb(x);
    v2.pb(x);
  }
  sort(all(v2),sc);

  if(diff) cout<<"rated"<<NL;
  else if(v==v2){
    cout<<"maybe"<<NL;
  }
  else cout<<"unrated"<<NL;

}

int main()
{
  fastio;
  solve();
  return Monke;
}