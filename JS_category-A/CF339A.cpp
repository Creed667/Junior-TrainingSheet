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
 vector<char>s2;
 cin>>s;
 forN(s.length()){
   if(s[i]!='+') s2.pb(s[i]);
 }
 sort(all(s2));
 int j=0;
 for(auto i:s2){
   cout<<i;
   j++;
   if(j<s2.size()) cout<<'+';
   
 }
 cout<<NL;

}

int main()
{
  fastio;
  solve();
  return Monke;
}