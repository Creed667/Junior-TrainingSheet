#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
using LL = long long;
using ull = unsigned long long int;

void solve(){
    int a[4],sum=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    string s;
    cin>>s;

    map<char,int>mp;
   for(int i=0;i<4;i++) mp['0'+i+1] = a[i];
   for(int i=0;i<s.length();i++){
    sum += mp[s[i]];
   }
   cout<<sum<<NL;

}

int main()
{
    fastio;
    solve();
    return Monke;
}