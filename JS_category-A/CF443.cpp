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

  string s;
  set<char>s2;
  
  getline(cin,s);
 
  for(int i=0;i<s.length();i++){
    if(s[i]>='a' && s[i]<='z') s2.insert(s[i]);
  }
  cout<<s2.size()<<NL;

}

int main()
{
  fastio;
  solve();
  return Monke;
}