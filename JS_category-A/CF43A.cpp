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
bool sortbysec(const pair<string,int> &a,const pair<string,int> &b){return a.second<b.second;}

void solve(){
 map<string,int>m;
 vector<pair<string,int>>v;
 int n,mxn=-1;
 cin>>n;
 string s,x,mx;
 forN(n){
   cin>>s;
   m[s]++;
 }
 for(auto i:m) {
  if(mxn<i.second) {
    mx = i.first;
    mxn = i.second;
  }
 }

 cout<<mx<<NL;
}

int main()
{
  fastio;
  solve();
  return Monke;
}