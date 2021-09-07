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
  //#ifndef ONLINE_JUDGE
  //freopen("input.txt", "r", stdin);
  //freopen("output.o", "w", stdout);
  //#endif
  int n,k;
  vector<char>v;
  char c='a';
  cin>>n>>k;
  forN(k){
    v.pb(c);
    c++;
  }
  int j=0;
  forN(n){
    if(j==v.size()) j=0;
    cout<<v[j];
    j++;
  }
}

int main()
{
  fastio;
  solve();
  return Monke;
}