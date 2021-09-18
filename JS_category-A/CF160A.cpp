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

bool srt(int a,int b) {
  return a>b;
}
void solve(){
 int n,sum=0,sum2=0,cnt=0;
 cin>>n;
 int x;
 vii v;
 forN(n){
   cin>>x;
   v.pb(x);
   sum +=x;
 }
   int half = sum/2;

 sort(all(v),srt);
 for(int i=0;i<n;i++){
   if(sum2>half) {
     break;
   }
   else {
     sum2+=v[i];
    cnt++;
   }
 }
 cout<<cnt<<NL;

}
int main()
{
  fastio;
  solve();
  return Monke;
}