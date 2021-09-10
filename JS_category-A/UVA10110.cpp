#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL endl
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

//if number of divisor of n is even then light is off or light is on
//every number has even divisors except perfect square numbers

void solve(){
  LL n;
  while (1)
  {
    cin>>n;
    if(n==0) break;
     LL x = sqrt(n);
     
    if((x*x)==n) {
      cout<<"yes"<<NL;
    }
    else cout<<"no"<<NL;
  
  }
  
  
}

int main()
{
  fastio;
  solve();
  return Monke;
}