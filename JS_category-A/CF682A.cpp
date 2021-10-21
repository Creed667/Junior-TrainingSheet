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
    LL n,m;
    LL sum=0;
    cin>>n>>m;
    LL mn = min(n,m);
    LL mx = max(n,m);
    for(int i=1;i<=mn;i++){
    sum+= ((mx+i)/5) - (i/5);
    }
    cout<<sum<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}