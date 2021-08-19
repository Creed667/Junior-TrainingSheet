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
   string s,t;
   cin>>s>>t;
   int j=0;
   int sl = s.length();
   int tl = t.length();
   for(int i=0;i<tl && j<sl;i++){
    if(s[j]==t[i]) {
        j++;
    }
   }
   j++;
   cout<<j<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}